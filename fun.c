#include <stdio.h>
int isArm(int n) {
    int original = n, sum = 0, digits = 0;
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    return (sum == original);
}
int isPer(int n) {
    int sum = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0)
            sum += i;
    }
    return (sum == n);
}

int main() {
    int num;
    scanf("%d", &num);

    if (isArm(num))
        printf("%d is an Armstrong Number\n", num);
    else
        printf("%d is Not an Armstrong Number\n", num);

    if (isPer(num))
        printf("%d is a Perfect Number\n", num);
    else
        printf("%d is Not a Perfect Number\n", num);

    return 0;
}