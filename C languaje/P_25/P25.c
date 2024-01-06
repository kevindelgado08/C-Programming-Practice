// C Pointers and Functions

#include <stdio.h>


int squareNumber(int number);
void findValue (int* num);
int* findSquare2(int* number);
int* addNumbers(int* num1, int* num2, int* num3);

int main(){

    int number = 25;
    int result = squareNumber(number);
    printf("Square of %d is %d\n", number, result);

    int number2=2;
    findValue(&number2);
    printf("Number: %d\n", number2);

    int number3 = 2;
    findSquare(&number3);
    printf("Square is %d\n", number3);

    int number4=4;
    int* result2=findSquare2(&number4);
    printf("Result is %d\n", *result2);

    int x = 1;
    int y = 2;
    int sum;
    int* result3 = addNumbers(&x, &y, &sum);
    printf("Sum is %d", &result3);

    return 0;
}

// Aqui tenemos una función que recibe como parametro un int
int squareNumber(int number){
        int square = number * number;
        return square;
    }

// Aqui haremos una funcion que recibe como parametro un pointer
void findValue (int* num){
    *num = 39;
}

void findSquare(int* number){
    int square = *number * *number;
    *number = square;
}
// Return pointers from a function
int* findSquare2(int* number){
    int square = *number * *number;
    *number = square;
    return number;
}
int* addNumbers(int* num1, int* num2, int* sum){
    *sum = *num1 + *num2;
    return sum;
}
