#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* create(int value) {
    struct node* n = malloc(sizeof(struct node));
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int height(struct node* root) {

    if(root == NULL)
        return 0;

    int l = height(root->left);
    int r = height(root->right);

    return (l > r ? l : r) + 1;
}

int isBalanced(struct node* root) {

    if(root == NULL)
        return 1;

    int l = height(root->left);
    int r = height(root->right);

    if(abs(l - r) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;

    return 0;
}

int main() {

    struct node* root = create(1);
    root->left = create(2);
    root->right = create(3);
    root->left->left = create(4);
    root->left->right = create(5);

    printf("Height: %d\n", height(root));

    if(isBalanced(root))
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}