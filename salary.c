#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {

    struct Employee emp[10];
    float totalSalary = 0;
    int highestIndex = 0;
    for(int i = 0; i < 10; i++) {
        scanf("%d", &emp[i].id);
        scanf("%s", emp[i].name);
        scanf("%f", &emp[i].salary);

        totalSalary += emp[i].salary;
        if(emp[i].salary > emp[highestIndex].salary) {
            highestIndex = i;
        }
    }
    printf("Total= %.2f\n", totalSalary);
    printf("ID: %d\n", emp[highestIndex].id);
    printf("Name: %s\n", emp[highestIndex].name);
    printf("Salary: %.2f\n", emp[highestIndex].salary);

    return 0;
}