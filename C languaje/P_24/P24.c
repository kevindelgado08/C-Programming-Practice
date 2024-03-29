// C Pointers and Arrays

#include <stdio.h>

int main(){

    int numbers[5]={1,2,3,4,5};
    for(int i=0; i<5; i++){
        printf("%d = %p\n", numbers[i], &numbers[i]);
    }
    printf("Array address: %p\n", numbers);
    printf("Array address of 1: %p\n", numbers);
    printf("Array address of 2: %p\n", numbers+1);
    printf("Array address of 3: %p\n", numbers+2);

    // Using pointers
    for(int i=0; i<5; i++){
        printf("%d = %p\n", *(numbers + i), numbers + i);
    }

    // Change values using pointers
    *numbers=2;
    *(numbers+4)= 11;
    printf("First number: %d\n", *numbers);
    printf("Last number: %d", *(numbers+4));


    return 0;
}
