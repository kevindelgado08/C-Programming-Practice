// C Pointers

#include <stdio.h>

int main(){

    int age = 25;
    printf("%p", &age); // Imprime posicion de memoria

    int* ptr = &age; // puntero

    printf("\n%p", ptr);

    // Access variable using Pointers

    printf("\nAddress : %p", ptr);
    printf("\nValue: %d", *ptr);

    // Change Value using Pointers

    *ptr = 31;
    printf("\nNew Value: %d", age);

    return 0;
}
