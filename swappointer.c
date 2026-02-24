#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to swap two string pointers
void swapStrings(char **str1, char **str2) {
    char *temp = *str1;  
    *str1 = *str2;       
    *str2 = temp;  
}    

int main() {
   
    char *a = (char *)malloc(50);
    char *b = (char *)malloc(50);

    strcpy(a, "Hello");
    strcpy(b, "World");


    swapStrings(&a, &b);

    printf("a = %s\nb = %s\n", a, b);

    free(a);
    free(b);

    return 0;
}