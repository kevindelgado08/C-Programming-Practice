// C Strings

#include <stdio.h>

int main(){

    char str[]= "Holaa!";
    printf("%s", str);

    char str2[20];
    printf("Enter your name: ");
    scanf("%s", &str2);
    printf("%s", str2);

    /*
    char str3[20];
    printf("Enter your complete name: ");
    fgets(str, sizeof(str3), stdin);
    printf("%s", str3);
    */

    // Access Character of a String
    printf("\n%c", str[0]);

    // Change Character of String
    str[0] = 'h';
    printf("\n%s", str);

    return 0;
}
