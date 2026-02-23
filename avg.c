#include <stdio.h>

int main() {
    int arr[100], n, i;
    int sum = 0;
    float avg;
    int *ptr;
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    ptr = arr;
    for(i = 0; i < n; i++)
        sum += *(ptr + i); 

    avg = (float)sum / n;
    printf(" %.2f\n", avg);

    return 0;
}