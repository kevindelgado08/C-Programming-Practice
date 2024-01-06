// Enumerations (enums) in C


enum Size{
    Small,          //0
    Medium,         //1
    Large,          //2
    ExtraLarge} //shoeSize;    //3

enum Size1{
    Small1 = 27,          //0
    Medium1 = 31,         //1
    Large1 = 35,          //2
    ExtraLarge1 = 40};    //3

#include <stdio.h>

int main(){

    enum Size shoeSize;
    shoeSize = ExtraLarge;
    printf("%d\n", shoeSize); //Imprime 3 porque es la posicion 3

    enum Size1 shoeSize1 = Small1;
    enum Size1 shoeSize2 = Medium1;
    enum Size1 shoeSize3 = Large1;
    enum Size1 shoeSize4 = ExtraLarge1;

    printf("%d\n", shoeSize1); //Imprime 3 porque es la posicion 3
    printf("%d\n", shoeSize2);
    printf("%d\n", shoeSize3);
    printf("%d\n", shoeSize4);

    return 0;
}
