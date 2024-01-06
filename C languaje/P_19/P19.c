// C Arrays

/*
    dataType arrayName[arraySize];
*/

#include <stdio.h>

int main(){

    int age[5] = {21, 29, 25, 32, 17}; //El compilador sabe que son 5 valores

    printf("%d", age[0]);
    printf("\n%d", age[1]);
    printf("\n%d", age[2]);
    printf("\n%d", age[3]);
    printf("\n%d", age[4]);

    //Tambien se puede definir de la siguiente manera:

    int age2[5]; //Array de ints
    age2[0] = 21;
    age2[1] = 29;
    age2[2] = 25;
    age2[3] = 32;
    age2[4] = 17;

    printf("\n%d", age2[0]);
    printf("\n%d", age2[1]);
    printf("\n%d", age2[2]);
    printf("\n%d", age2[3]);
    printf("\n%d", age2[4]);

    // Solicitando al usuario

    int age3[5];
    printf("Enter 5  inputs values: ");
    scanf("%d", &age3[0]);
    scanf("%d", &age3[1]);
    scanf("%d", &age3[2]);
    scanf("%d", &age3[3]);
    scanf("%d", &age3[4]);

    printf("\n%d", age3[0]);
    printf("\n%d", age3[1]);
    printf("\n%d", age3[2]);
    printf("\n%d", age3[3]);
    printf("\n%d", age3[4]);

    // Cambiar valores en el array original

    int age4[5] = {21, 29, 25, 32, 17};
    age4[0]=12;
    printf("\nEl nuevo valor de age4[0] es: %d", age4[0]);


    //Loop and Array
    int age5[5];
    for(int i=0; i<5; i++){
        scanf("%d", &age5[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d ", age5[i]);
    }

    return 0;
}
