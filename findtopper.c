#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int topperIndex = 0;
    for(int i = 0; i < 5; i++) {
        scanf("%d", &s[i].roll);
        scanf("%s", s[i].name);
        scanf("%f", &s[i].marks);
    }

    for(int i = 1; i < 5; i++) {
        if(s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    printf("Roll: %d\n", s[topperIndex].roll);
    printf("Name: %s\n", s[topperIndex].name);
    printf("Marks: %.2f\n", s[topperIndex].marks);

    return 0;
}