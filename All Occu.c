#include <stdio.h>

int main() {
    char str[1000];
    char ch;
    int i, j = 0;
    fgets(str, sizeof(str), stdin);  
    printf("Enter character to remove: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch && str[i] != '\n') {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';  

    printf(" %s\n", str);

    return 0;
}