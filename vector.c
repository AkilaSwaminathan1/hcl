#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *arr;
    int size;
    int capacity;
} vec;

void init(vec *v, int cap) {
    v->arr = malloc(cap * sizeof(int));
    v->size = 0;
    v->capacity = cap;
}

void resize(vec *v) {
    v->capacity *= 2;
    v->arr = realloc(v->arr, v->capacity * sizeof(int));
}

void push(vec *v, int value) {
    if (v->size == v->capacity)
        resize(v);

    v->arr[v->size] = value;
    v->size++;
}

void pop(vec *v) {
    if (v->size > 0)
        v->size--;
    else
        printf("Vector is empty\n");
}

void print(vec *v) {
    for (int i = 0; i < v->size; i++)
        printf("%d ", v->arr[i]);
    printf("\n");
}

void freeVector(vec *v) {
    free(v->arr);
}

int main() {
    vec v;          
    init(&v, 2);

    push(&v, 10);
    push(&v, 20);
    push(&v, 30);

    printf("Vector elements: ");
    print(&v);

    pop(&v);

    printf("After pop: ");
    print(&v);

    freeVector(&v);
    return 0;
}