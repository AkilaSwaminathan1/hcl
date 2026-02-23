#include <stdio.h>
#include <math.h>

int main() {
    int n, isPrime = 1;
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is Prime", n);
    else
        printf("%d is Not Prime", n);

    return 0;
}