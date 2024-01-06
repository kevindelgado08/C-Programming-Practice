// Recursion in C

/*
    void recurse (){
        ...
        recurse() // Se llama a la función nuevamente
        ...
    }

*/

#include <stdio.h>

int sum(int n);
int fact(int n);

int main(){

    int number, result;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);
    printf("sum = %d\n", result);

    int number2, result2;
    printf("Enter a positive integer: ");
    scanf("%d", &number2);

    result2 = fact(number2);
    printf("fact = %d", result2);
    return 0;
}

int sum(int n){
    if(n!=0){
        //sum() function calls ifself
        return n + sum(n-1);
    }
    else{
        return n;
    }
}

int fact(int a){
    if(a!=0){
        //fact() function calls ifself
        return a * fact(a-1);
    }
    else{
        return 1;
    }
}
