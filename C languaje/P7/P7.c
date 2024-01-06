// Type Conversion

#include <stdio.h>

int main (){

    char a = '5';
    int b = 9;
    int result = a + b;
    printf("%d", result);


    double a1 = 5.67;
    int b1 = 9;
    double result1 = a1 + b1;
    printf("\n%lf", result1);


    double a2 = 5.67;
    int b2 = 9;
    int result2 = (int)a2 + b2;
    printf("\n%d", result2);


    int a3 = 9;
    int b3 = 2;
    double result3 = (double)a3/b3;
    printf("\n%lf", result3);

    return 0;
}
