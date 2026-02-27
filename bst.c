#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* create(int value) {
    struct node* n = (struct node*)malloc(sizeof(struct node));
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

void inorder(struct node* root) {

    if(root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int search(struct node* root, int key) {

    if(root == NULL)
        return 0;

    if(root->data == key)
        return 1;

    if(key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main() {

    struct node* root = NULL;
    int choice, value;

    while(1) {
        scanf("%d", &choice);

        if(choice == 1) {
            scanf("%d", &value);
            root = insert(root, value);
        }

        else if(choice == 2) {
            inorder(root);
            printf("\n");
        }

        else if(choice == 3) {
            scanf("%d", &value);
            if(search(root, value))
                printf("Found\n");
            else
                printf("Not Found\n");
        }

        else if(choice == 4)
            break;
    }

    return 0;
}