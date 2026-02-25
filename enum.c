#include <stdio.h>

enum Status {
    PENDING,
    SHIPPED,
    DELIVERED
};

int main() {

    enum Status orderStatus;

    int choice;

    scanf("%d", &choice);

    orderStatus = choice;

    printf("\nCurrent Order Status: ");

    switch(orderStatus) {
        case PENDING:
            printf("PENDING\n");
            break;

        case SHIPPED:
            printf("SHIPPED\n");
            break;

        case DELIVERED:
            printf("DELIVERED\n");
            break;

        default:
            printf("Invalid Status\n");
    }

    return 0;
}