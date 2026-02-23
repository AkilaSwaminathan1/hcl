#include <stdio.h>
#include <string.h>

int main() {
    char src[100], dest[50];
    fgets(src, sizeof(src), stdin);
    src[strcspn(src, "\n")] = '\0'; 
    strncpy(dest, src, sizeof(dest) - 1); 
    dest[sizeof(dest) - 1] = '\0';    

    printf("Copied string: %s\n", dest);

    return 0;
}