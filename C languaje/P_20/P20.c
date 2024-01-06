// Multidimensional Arrays

/*
    int arr[2][3];

*/
#include <stdio.h>

int main(){

    int arr[2][3] = {{1,2,3}, {4,5,6}};
    arr[0][0]; //Primer fila primer columna
    arr[1][2]; //Segunda fila tecer columna

    //Tambien se pueden reemplazar valores del array

    // For Loop in Multidimensional Array
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr[i][j]);
        }
    }

    return 0;
}
