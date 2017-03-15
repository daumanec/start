#include "encrypt.h"

void Encrypt(char *message)
{
    while (*message) {
	*message = *message ^ 31;
	message++;
    }
}
