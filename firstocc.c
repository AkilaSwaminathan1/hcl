#include <stdio.h>
#include <string.h>

int fir(char *text, char *pattern) {
    int i, j;
    int n = strlen(text);
    int m = strlen(pattern);

    for(i = 0; i <= n - m; i++) { 
        for(j = 0; j < m; j++) {
            if(text[i + j] != pattern[j])
                break;
        }
        if(j == m)
            return i;  
    }
    return -1; 
}
int main() {
    char text[1000], pattern[100];
    int index;
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';  // remove newline

    fgets(pattern, sizeof(pattern), stdin);
    pattern[strcspn(pattern, "\n")] = '\0';  // remove newline

    index = fir(text, pattern);
    if(index != -1)
        printf("%d\n", index);
    else
        printf("Pattern not found\n");

    return 0;
}