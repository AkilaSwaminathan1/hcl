#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* create(int value) {
    struct node* n = malloc(sizeof(struct node));
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct node* insert(struct node* root, int value) {

    if(root == NULL)
        return create(value);

    if(value < root->data)
        root->left = insert(root->left, value);
    else if(value > root->data)
        root->right = insert(root->right, value);

    return root;
}

struct node* minValue(struct node* root) {
    while(root->left != NULL)
        root = root->left;
    return root;
}

struct node* deleteNode(struct node* root, int key) {

    if(root == NULL)
        return root;

    if(key < root->data)
        root->left = deleteNode(root->left, key);

    else if(key > root->data)
        root->right = deleteNode(root->right, key);

    else {

        if(root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }

        else if(root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }

        struct node* temp = minValue(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

void inorder(struct node* root) {

    if(root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {

    struct node* root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("Before Delete: ");
    inorder(root);

    root = deleteNode(root, 50);

    printf("\nAfter Delete: ");
    inorder(root);

    return 0;
}