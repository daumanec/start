#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    printf("%d\n", argc);
    printf("Dinners: %s\n", argv[argc-1]);
    printf("Juice: %s\n", getenv("JUICE"));
    return 0;
}
