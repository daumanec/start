#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* Now()
{
    time_t t;
    time(&t);
    return asctime(localtime(&t));
}

int main()
{
    char comment[80];
    char cmd[120];

   // printf("%s\n", Now());
    fgets(comment, 80, stdin);
   // printf("%s\n", comment);
    sprintf(cmd, "echo '%s %s' >> reports.log", Now(), comment);
   // printf("%s\n", cmd);
    system(cmd);
    return 0;
}
