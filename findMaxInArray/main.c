#include <stdio.h>
#include <stdlib.h>

#define sizeArr(array) (sizeof(array)/sizeof(array[0]))

int maxInt(int n1, int n2){

        return n1 > n2 ? n1 : n2;
    }


int findMax (int v[], int length)
{

    if(length  <= 1)
    {
        return v[0];

    }


    return maxInt(findMax(v, length-1), v[length-1]);

    // Left- Right Recursive

    //    int left = findMax(v, length/2);
    //    int right = findMax(&v[length/2], (length - length/2));
    //    return left > right ? left : right;

};

int main()
{
    int myArr[]= {8,2,7,2,6,5,22,4,99,3,2,1,11,9};

    int res = findMax(myArr,sizeArr(myArr));

    printf("%d", res);
    return 0;
}
