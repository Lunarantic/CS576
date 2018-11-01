#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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
        read_input();

        return EXIT_SUCCESS;
}
