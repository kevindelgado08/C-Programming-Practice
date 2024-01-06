// Boolean and Comparasion Operators

#include <stdio.h>
#include <stdbool.h>

int main (){

    // True != true
    bool value = true;
    bool value2 = false;

    printf("%d", value);
    printf("\n%d", value2);


    /*
        > Greather than
        < Less than
        == Equal to
        >= Greather than or equal to
        <= Less than or equal to
        != Not equal to
    */

    bool value3 = (12>9);
    if (value3){
        printf("\nSi es mayor: %d", value3);
    }

    bool value4 = (5>9);
    if (value4==0){
        printf("\nNo es mayor: %d", value4);
    }


    // Logical Operators

    /*
        && AND
        || OR
        ! NOT
    */

    int age = 18;
    int age2 = 16;
    double heigth = 6.3;

    bool result = (age >= 18) && (heigth>6.0);
    printf ("\n(AND)El resultado es: %d", result);

    bool result2 = (age2 >= 18) || (heigth>6.0);
    printf ("\n(OR)El resultado es: %d", result2);

    bool result3 = !(age2 >= 18); // Se puso not
    printf ("\n(NOT)El resultado es: %d", result3);


    return 0;
}
