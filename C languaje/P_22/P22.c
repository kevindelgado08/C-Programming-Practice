// C String function

#include <stdio.h>
#include <string.h>

int main(){

    char language[]= "C programming";
    printf("%s", language);
    printf("\nLength: %zu", strlen(language)); // Function strlen()

    char food[]="pizza";
    char bestFood[strlen(food)];
    strcpy(bestFood, food); // Function strcpy()
    printf("\n%s", bestFood);

    char text1[]="Hey";
    char text2[]="How are you?";
    strcat(text1, text2); //Function strcat()
    printf("%s", text1);

    char text3[]="abcd";
    char text4[]="efgh";
    int result = strcmp(text3, text4); //Function strcmp()
    printf("%d", result);

    return 0;
}
