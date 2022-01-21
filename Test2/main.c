#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[60], str1[10], str2[10], str3[10];
    int year,c;

    FILE *fp;
    fp = fopen("file.txt", "r+");

    if(fp == NULL){perror("Error"); return -1;}

    while((fscanf(fp,"%s %s %d", str1, str2, &year)) != EOF ){

        printf("Str1 %s\nStr2 %s\nYear %d\n", str1, str2, year);
    }

    fclose(fp);
    fp = NULL;
    return 0;
}

