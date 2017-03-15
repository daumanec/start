#include <stdio.h>
#include "encrypt.h"
#include "checksum.h"

int main()
{
    char s[] = "Say friend and come in";
    Encrypt(s);
    printf("%s\n", s);
    printf("Checksum is: %i\n", Checksum(s));
    Encrypt(s);
    printf("%s\n", s);
    printf("Checksum is: %i\n", Checksum(s));
    return 0;
}
