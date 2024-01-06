// C Struct

#include <stdio.h>

struct Person {
    double salary;
    int age;
}; //person1, person2;  //Otra forma de definirlo

//Typedef in Struct
typedef struct persona{
    double salary;
    int age;
} persona;

//Example with typedef
typedef struct Complex{
    double real;
    double imagine;
}complex;

int main(){

    struct Person person1;
    struct Person person2;

    person1.age=25;
    person1.salary=4321.78;
    printf("Age of person1: %d\n", person1.age);
    printf("Salary of person1: %.2lf\n", person1.salary);

    person2.age=31;
    person2.salary=78943.2;
    printf("Age of person2: %d\n", person2.age);
    printf("Salary of person2: %.2lf\n", person2.salary);

    // Otra forma de hacerlo es

    struct Person person3 = {.age=25, .salary=4321.78};
    printf("Age of person3: %d\n", person3.age);
    printf("Salary of person3: %.2lf\n", person3.salary);

    // Typedef in Struct
    persona person4;

    person4.age=25;
    person4.salary=4321.78;
    printf("Age of person1: %d\n", person4.age);
    printf("Salary of person1: %.2lf\n", person4.salary);

    // Example with typedef
    complex c1 = {.real = 21.87, .imagine = 30};
    complex c2 = {.real = 13.34, .imagine = 112.23};

    complex sum;

    sum.real = c1.real + c2.real;
    sum.imagine = c1.imagine + c2.imagine;

    printf("Result is %.2lf + %.2lfi", sum.real, sum.imagine);

    return 0;
}
