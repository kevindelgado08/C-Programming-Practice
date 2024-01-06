// C Variable Scope

/*
    Local Variable Scope
    Global Variable Scope
*/

#include <stdio.h>
// Local Scope
void addNumbers(int number1, int number2){
    int result = number1 + number2;
}
// Global Scope
int result;
void addNumbers2(int number1, int number2){
    result = number1 + number2;
}


int main(){

    // Local Scope
    addNumbers(8,9);
    printf("Result = %d\n", result);

    // Global Scope
    addNumbers2(8,9);
    printf("Result = %d\n", result);

    return 0;
}
