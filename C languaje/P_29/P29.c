// C File Handling

#include <stdio.h>

int main(){
    FILE* fptr;

    fptr = fopen("text.txt", "r"); // r es de "read"
    char content[1000];

    if (fptr != NULL){
        printf("File Open Successful");
        while(fgets(content, 1000, fptr)){
             printf("%s", content);
        }; //fgets solo lee la primer linea del archivo, con el while se leen las siguientes

    }
    else{
        printf("File Open Unsuccessful");
    }
    fclose(fptr);

    // Write content
    FILE* fptr2;
    fptr2 = fopen("newText.txt", "w");
    fputs("I Love C programming\n", fptr2);
    fputs("C programming series by Kevon is the best", fptr2);
    return 0;
}
