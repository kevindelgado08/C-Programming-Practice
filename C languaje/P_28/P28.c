// Dynamic Memory Allocations

/*
    malloc() - memory allocation
    realloc() -
    free() -
*/

#include <stdio.h>

int main(){

    //Use malloc()

    int n = 4;
    int* ptr;
    ptr = (int*)malloc(n*sizeof(int));

    if(ptr==NULL){
        printf("Memory cannot allocated");
        return 0;
    }

    printf("Enter inputs values:\n");
    for(int i=0; i<n; i++){
        scanf("%d", ptr + i);
    }

    printf("Input values:\n");
    for(int i=0; i<n; i++){
        printf("%d\n", *(ptr + i));
    }
    // Use free()
    free(ptr);

    return 0;
}
