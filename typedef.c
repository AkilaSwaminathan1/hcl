#include <stdio.h>

typedef struct {
    int roll;
    float marks;
} Student;

int main() {

    Student s1;  

    s1.roll = 1;
    s1.marks = 90;

    printf("Roll: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}