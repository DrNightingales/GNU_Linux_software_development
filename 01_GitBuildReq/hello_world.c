#include <stdio.h>

int main()
{
    char buff[1000];
    fgets(buff, sizeof(buff), stdin);
    printf("Hello, %s\n", buff);
    return 0;
}