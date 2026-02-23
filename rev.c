#include <stdio.h>
#include <limits.h>

int main() {
    int n, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        int digit = n % 10;
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
            printf("Overflow");
            return 0;
        }

        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}