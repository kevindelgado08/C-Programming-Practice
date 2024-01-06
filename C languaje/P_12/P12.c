// While Loop

#include <stdio.h>

int main(){

    /*
        while(condicion){
             //body of while
        }
    */

    int count = 1;
    while(count<5){
        printf("While loop in C\n");
        count++;
    }

    // Multiplication table

    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int count2 = 1;
    while(count2<=10){
        int product = number * count2;
        //printf("%d\n", product);
        printf("%d*%d = %d\n", number, count2, product);
        count2++;
    }



    /*
        do{
            //body of loop
        } while(condition);
    */

    int count3 = 1;
    do{
        printf("%d\n", count3);
        count3++;
    } while(count3<5);


    return 0;
}
