// Break and Continue Statement

#include <stdio.h>

int main(){

    // Break with FOR LOOP

    for(int i=0; i<=5; i++){
        printf("%d\n", i);
        break; // Se sale del FOR, y solo imprime 0
        printf("After the break");
    }

    printf("\n");

    for(int i=0; i<=5; i++){
        if(i== 3){
            break;
        }
        printf("%d\n", i);
    }

    printf("\n");

    // Break with WHILE LOOP

    while(1){
        int number;
        printf("Enter the number: ");
        scanf("%d", &number);

        if (number<0){
            break;
        }
        printf("%d\n", number);
    }

    printf("\n");

    // Continue Statement
    for(int i=0; i<=5; i++){
        if(i== 3){
            continue;
        }
        printf("%d\n", i);
    }

    printf("\n");

    // Example BREAK and CONTINUE

    while(1){
        int number2;
        printf("Enter the number: ");
        scanf("%d", &number2);

        if (number2<=0){
            break;
        }
        if ((number2%2) != 0){
            continue;
        }
        printf("%d\n", number2);
    }

    printf("\n");

    return 0;
}
