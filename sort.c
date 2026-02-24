#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();   

    char cities[20][50];   
    for (int i = 0; i < n; i++) {
        fgets(cities[i], sizeof(cities[i]), stdin);
        cities[i][strcspn(cities[i], "\n")] = '\0';
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(cities[j], cities[j + 1]) > 0) {
                char temp[50];
                strcpy(temp, cities[j]);
                strcpy(cities[j], cities[j + 1]);
                strcpy(cities[j + 1], temp);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", cities[i]);
    }

    return 0;
}