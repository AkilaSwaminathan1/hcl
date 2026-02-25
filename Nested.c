#include <stdio.h>

struct Customer {
    int customerId;
    char name[50];
};

struct Item {
    int itemId;
    char itemName[50];
    float price;
};

struct Order {
    int orderId;
    struct Customer customer;
    struct Item item;
};

void printOrder(struct Order o) {
    printf("Order ID: %d\n", o.orderId);

    printf("\nCustomer Details:\n");
    printf("Customer ID: %d\n", o.customer.customerId);
    printf("Customer Name: %s\n", o.customer.name);

    printf("\nItem Details:\n");
    printf("Item ID: %d\n", o.item.itemId);
    printf("Item Name: %s\n", o.item.itemName);
    printf("Price: %.2f\n", o.item.price);
}

int main() {

    struct Order order1;
    scanf("%d", &order1.orderId);

    scanf("%d", &order1.customer.customerId);

    scanf("%s", order1.customer.name);

    scanf("%d", &order1.item.itemId);

    scanf("%s", order1.item.itemName);
    scanf("%f", &order1.item.price);

    printOrder(order1);

    return 0;
}