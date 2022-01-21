#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char *str1,*str2,**str,c;

    int **p;

    FILE *fp1,*fp2;

    fp1 = fopen("file1.txt", "r+");
    if(fp1 == NULL){
        perror("");
        exit(-1);
    }

    fp2 = fopen("file2.txt", "r+");
    if(fp2 == NULL){
        perror("");
        exit(-2);
    }

    str = (char *) malloc (100 * sizeof(char*));
    if(str == NULL){
        perror("");
        exit(-3);
    }

    for(int i=0; i<10; i++){
        str[i] = (char *) malloc (10 * sizeof(char));
        if(str[i] == NULL){
        perror("");
        exit(-4);
    }
    }


    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
                fgets(str[i], 10, fp2);

        }
    }

    for(int i=0; i<10; i++){
        printf("%s\n", str[i]);
    }
    return 0;
}
