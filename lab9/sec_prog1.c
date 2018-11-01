#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <seccomp.h>

static void party()
{       
        printf("Verification succeeded!\n");
        exit(EXIT_SUCCESS);
}

static int complex_verify(const char *buffer)
{
        char str[64];

        printf("Verifying: %s\n", buffer);
        strcpy(str, buffer);

        int i;
        for (i = 0; i < (sizeof(str) - 1); i++)
                str[i]++;
        return (i - 62);
}

static void read_input()
{
        char buffer[512];

        printf("Enter verification string?\n");
        if (fread(buffer, 1, 512, stdin) < 0) {
                perror("Error reading input");
                return;
        }

        if (complex_verify(buffer) >= 0)
                printf("Verification failed!\n");
        else
                party();
}

int main(int argc, char **argv)
{
        scmp_filter_ctx * ctx;
        ctx = seccomp_init(SCMP_ACT_KILL);

        seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0);
        seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(read), 0);
        seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(write), 0);
        // puts inherently calls syscall 5 (fstat)
        seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(fstat), 0);

        seccomp_load(ctx);

        read_input();

        return EXIT_SUCCESS;
}
