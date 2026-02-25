#include <stdio.h>

struct Product {
    float price;
    float discount; 
};

float calculateDiscount(struct Product p) {
    float finalPrice = p.price - (p.price * p.discount / 100);
    return finalPrice;
}
void updatePrice(struct Product *p) {

    p->price = p->price - (p->price * p->discount / 100);
}

int main() {

    struct Product p1;
    scanf("%f", &p1.price);
    scanf("%f", &p1.discount);
    float discounted = calculateDiscount(p1);
    printf("\nDiscounted Price (Value): %.2f\n", discounted);
    printf("Original Price after value function: %.2f\n", p1.price);
    updatePrice(&p1);
    printf("\nUpdated Original Price (Address): %.2f\n", p1.price);

    return 0;
}