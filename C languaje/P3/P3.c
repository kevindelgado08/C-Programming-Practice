// Data types

/*
int     (4 bytes)| %d for printing
double  (8 bytes)| %lf for printing
float   (4 bytes)| %f for printing
char    (1 bytes)| %c for printing
*/


#include <stdio.h>

int main(){

    int age = 10; // Int -> Valores enteros
    printf("Age: %d", age);

    double number = 12.45;
    printf("\nNumber: %.2lf", number);

    float number1 = 10.9f;
    printf("\nNumber1: %.1f", number1);

    double numberE = 5.5e6;
    printf("NumberE: \n%lf", numberE);

    char name = 'a';
    printf("\nEl caracter es: %c", name);

    //Operador sizeof()

    printf("\nint size = %zu", sizeof(age));
    printf("\ndouble size = %zu", sizeof(number));
}
