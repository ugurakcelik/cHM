#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int **p;
    int x = 10;

    p = (int **) malloc (x * sizeof(int*));
    if(p == NULL){
        perror("");
        exit(-1);
    }
    for(int i=0;i<5;i++){
        p[i] = (int*) malloc(x * sizeof(int));
        if(p[i] == NULL){
            perror("");
            exit(-1);
        }
    }


    for(int i = 0, k=0; i<5;i++){
        for(int j = 0; j<5; j++,k++){
            p[i][j] = k+10;
        }
    }

    for(int i = 0; i<5;i++){
        for(int j = 0; j<5; j++){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    for(int i=4; i>=0; i--){
       free(p[i]);
    }

//    for(int i =0;i<5; i++){
//        free(p[i]);
//    }

    free(p);


    printf("Freed\n");

    for(int i = 0; i<5;i++){
        for(int j = 0; j<5; j++){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}

