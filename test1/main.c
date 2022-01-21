#include <stdio.h>
#include <stdlib.h>

int addingNumbers(int x){
    if (x==0){
       return 0;
    }
    else{
       x += addingNumbers(x-1);
       return x;
    }
}

int main()
{
    printf("Hello World!\n");
    int result = addingNumbers(3);
    printf("%d", result);
    return 0;
}
