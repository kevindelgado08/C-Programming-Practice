// User Input

#include <stdio.h>
int main (){

    int age;
    printf("Enter input value: ");
    scanf("%d", &age);
    printf("Age = %d", age);

    // Double input

    double number;
    char alphabet;

    printf("\nEnter double input: ");
    scanf("%lf", &number);

    printf("Enter character input: ");
    scanf("\n%c", &alphabet);

    printf("Number = %lf", number);
    printf("\nCharacter = %c", alphabet);

    // Multiple input

    double number2;
    char alphabet2;

    printf("\nEnter inputs: ");
    scanf("%lf %c", &number2, &alphabet2);  // se pueden almacenar seguidos

    printf("Number = %lf", number2);
    printf("\nCharacter = %c", alphabet2);

    return 0;

}
