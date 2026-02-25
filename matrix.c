#include <stdio.h>
#include <stdbool.h>

bool checkMatrix(int arr[9][9]) {
    for(int i = 0; i < 9; i++) {
        int freq[10] = {0};

        for(int j = 0; j < 9; j++) {
            int num = arr[i][j];

            if(num < 1 || num > 9 || freq[num] == 1)
                return false;

            freq[num] = 1;
        }
    }
    for(int j = 0; j < 9; j++) {
        int freq[10] = {0};

        for(int i = 0; i < 9; i++) {
            int num = arr[i][j];

            if(num < 1 || num > 9 || freq[num] == 1)
                return false;

            freq[num] = 1;
        }
    }

    return true;
}

int main() {

    int matrix[9][9];


    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if(checkMatrix(matrix))
        printf("Valid Matrix\n");
    else
        printf("Invalid Matrix\n");

    return 0;
}