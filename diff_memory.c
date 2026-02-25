#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {

    union Data d;

    printf("Size of union: %lu bytes\n", sizeof(d));

    d.i = 10;

    d.f = 5.5;

    strcpy(d.str, "Hello");

    return 0;
}