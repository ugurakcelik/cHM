#include <stdio.h>
#include <stdlib.h>

    double perimeterOfRectangle(double height, double width){

        double perimeter = (height + width) * 2;
        return perimeter;
    }

    double areaOfRectangle(double height, double width){

        double area = height * width;
        return area;
    }

int main(int argc, char *argv[])
{
    
    double height= atoi(argv[1]), width = atoi(argv[2]);
    printf("Perimeter of rectangle : %.2f\nArea of rectangle : %.2f\n", perimeterOfRectangle(height,width), areaOfRectangle(height,width));
    return 0;
}

