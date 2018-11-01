#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int unbelievable (unsigned long d)
{

        if (d == 0xdeadbeef) {
                printf("I don't believe it!\n");
                exit(1);
        }

        printf("I believe it   \n");
        return 0;
}

void vul()
{
        char buf[256];
        read(0, buf, 512);
        printf("argument: %s\n", buf);
}

int main(int argc, char* argv[])
{

        vul();

        return 0;
}
