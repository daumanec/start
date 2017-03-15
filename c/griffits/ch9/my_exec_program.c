#include <stdio.h>
#include <unistd.h>

int main()
{
    char *myEnv[] = {"JUICE=apple and abricot", NULL};
    execle("~/study/c/griffits/ch9/dinner_info", "~/study/c/griffits/ch9/dinner_info", "4", NULL, myEnv);
    puts("dinner info does not run");
    return 0;
}
