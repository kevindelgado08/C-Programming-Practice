// Ternary Operations

#include <stdio.h>

int main(){

    /*

    test_condition ? expresion1 : expresion2;
                       (true)      (false)

    */

    int age = 15;
    (age>=18) ? printf("You can vote") : printf("You cannot vote");

    char operator = '+';
    int num1 = 8;
    int num2 = 7;
    int result = (operator == '+') ? (num1 + num2) : (num1 - num2);
    printf("\n%d", result);

    // Program Task
    int number;
    printf("\nEnter the number: ");
    scanf("%d", &number);

    (number % 2) ? printf("The number is odd") : printf("The number is even");

    return 0;
}
