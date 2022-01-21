#include <stdio.h>
#include <stdlib.h>


int greatCommonDivisor(int x, int y){
    if(x == y){
        return x;
    }
    if(x > y){
      return greatCommonDivisor(x-y,y);
    }
    else{
      return greatCommonDivisor(x,y-x);
    }
}

int main()
{
    int x = 20, y=8;
    int gcd = greatCommonDivisor(x,y);
    printf("%d", gcd);
    return 0;
}

