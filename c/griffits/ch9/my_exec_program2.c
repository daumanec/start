#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main()
{
    char *myEnv[] = {"JUICE=apple and abricot", NULL};
    //execle("diner_info", "diner_info", "4", NULL, myEnv);
    execle("diner_info", "4", NULL, myEnv);
    fprintf(stderr, "diner_info does not run because: %s\n ", strerror(errno));
    return 0;
}
