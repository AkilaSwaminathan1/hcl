#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    char filtered[1000];
    int i, j = 0;
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {
            filtered[j++] = tolower(str[i]);
        }
    }
    filtered[j] = '\0';
    int left = 0, right = j - 1;
    int palindrome = 1;
    while(left < right) {
        if(filtered[left] != filtered[right]) {
            palindrome = 0;
            break;
        }
        left++;
        right--;
    }
    if(palindrome)
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}