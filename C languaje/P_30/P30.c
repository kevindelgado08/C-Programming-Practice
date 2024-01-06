// Preprocesor and Macros

//Preprocesor
#include <stdio.h>
#include <math.h>

//Macros
#define PI 3.1415

//Functions Macros
#define circleArea(r) (PI * r * r)

int main(){

    double radius = 12.4;
    double area = circleArea(radius);
    printf("Area is: %.2lf", area);
    return 0;
}
