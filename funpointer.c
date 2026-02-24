#include <stdio.h>
int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }
int mul(int a,int b){ return a*b; }
int divide(int a,int b){
    return a/b;
}

int main() {
    int x, y;
    int (*operation)(int,int);
    scanf("%d %d", &x, &y);
    operation = add;
    printf("Add: %d\n", operation(x,y));
    operation = sub;
    printf("Subtract: %d\n", operation(x,y));
    operation = mul;
    printf("Multiply: %d\n", operation(x,y));
    operation = divide;
    printf("Divide: %d\n", operation(x,y));

    return 0;
}