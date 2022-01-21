#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("file1.txt", "w+");

    char str[100];

    if (fp == NULL){
         perror("Error");
         return -1;
    }

    fprintf(fp, "%s" ,"Hello");

    rewind(fp);

    fgets(str, 100, fp);
    printf("%s", str);

    fclose(fp);
    fp = NULL;

    return 0;
}
