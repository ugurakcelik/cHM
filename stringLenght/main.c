#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *string[] = {"Hello","World"};
    int len = strlen(string);
    printf("%d\n", len);
    printf(string[1]);
    return 0;
}
