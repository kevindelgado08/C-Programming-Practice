// For Loop

#include <stdio.h>

int main(){

    /*
    for(initializationExpression; testExpression; updateExpression){
        //code inside the for loop
    }
    */

    for(int i=0; i < 10; i++){
        //printf("%d ", i);
        printf("Condition\n");
    }

    // Sum of numbers from 1 to 100
    int sum =0;
    for(int i=1; i <= 100; i++){
        sum = sum + i;
    }
    printf("%d", sum);

    //Sum of Even Numbers
    int sum2 =0;
    for(int i=2; i <= 100; i=i+2){
        sum2 = sum2 + i;
    }
    printf("\n%d", sum2);

    return 0;
}
