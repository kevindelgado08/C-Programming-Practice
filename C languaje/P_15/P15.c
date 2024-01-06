// C Functions
#include <stdio.h>

/*
    returnType functionName(){
        // body of the function
        ...
        ...
    }
*/

void greet (){
    printf("Good morning!!\n");
}

// Function parameters

void calculateSquare(int number){
    int square = number * number;
    printf("Square of %d is %d\n", number, square);
}

void addNumbers(int number1, int number2){
    int sum = number1 + number2;
    printf("Sum of %d and %d is %d\n", number1, number2, sum);
}

// Return Types

int addNumbers2(int number1, int number2){
    int sum = number1 + number2;
    return sum;
}

// Function Prototype

/*
Las funciones se pueden definir despues del main, pero se debe
de llamar a la funcion antes del main, para que el compilador
pueda hacer uso de esta
*/

// Standard Library Function
#include <math.h>

int main(){

    greet();
    calculateSquare(4);
    addNumbers(8,9);
    int result = addNumbers2(8,9);
    printf("Result = %d\n", result);
    printf("After the function call\n");

    float x = sqrt(25);
    printf("Square root is %f", x);
    return 0;
}

// El main es considerado como una función.
