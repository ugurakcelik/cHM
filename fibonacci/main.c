#include <stdio.h>
#include <stdlib.h>

int fibonacci (int n){
    if(n <= 1){
        return n;
    }
    else{
    return fibonacci(n-1)+fibonacci(n-2);
        }
}

int main()
{


    for(int i=0; i<10; i++){
        printf("%d ", fibonacci(i));
    }


    return 0;
}
