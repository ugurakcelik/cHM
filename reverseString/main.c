#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char* input){

    if(*input == '\0'){
        return;
    }

   reverseString(input+1);
   printf("%c", *input);
   return;
};


int main()
{
    char input[20];
    scanf("%s",input);
    reverseString(input);
    return 0;

}
