#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};
void updateMarks(struct Student *s) {  
    s->marks = 95;  
}
int main() {
   struct Student s1 = {1, "Akila", 80};

    updateMarks(&s1);

    printf(" %.2f\n", s1.marks);

    return 0;
}