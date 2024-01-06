// If Else Statements

#include <stdio.h>

int main (){

    /*
    if (state_condition){
        //body
    }
    */

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>=18){
        printf("You are eligible to vote.");
    }

    else{
        printf("Sorry, you aren't eligible to vote.");
    }



    /*
    if (test_condition){
        // body 1
    }
    else if (test_condition2){
        // body 2
    }
            .
            .
            .
    else{
        //body n
    }
    */

    int age2 = 15;
    printf("\nEnter your age2: ");
    scanf("%d", &age2);

    if(age2>120 || age2<0){
        printf("Invalid age");
    }
    else if(age2>=18){
        printf("You are eligible to vote");
    }
    else{
        printf("Sorry, you aren't eligible to vote");
    }



    // Program Task
    double number;
    printf("\nEnter the number: ");
    scanf("%lf", &number);

    if(number>0){
        printf("The number is positive.");
    }
    else if(number<0){
        printf("The number is negative.");
    }
    else{
        printf("The number is 0.");
    }
    return 0;
}
