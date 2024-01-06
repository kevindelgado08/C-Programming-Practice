// C Standard Library Functions

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){

    double num =25;
    printf("Square root is: %lf\n", sqrt(num)); // raiz cuadrada

    int num2 =27;
    printf("Cube root is: %lf\n", cbrt(num2)); //raiz cubica

    int a = 5;
    int b = 3;
    double result = pow(a,b); //elevado
    printf("Power: %lf\n", result);

    char alpha = 'e';
    char upper = toupper(alpha); //Mayuscula
    printf("%c\n", upper);

    char lower = tolower(upper); //Minuscula
    printf("%c", lower);

    return 0;
}
