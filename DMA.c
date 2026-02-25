#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Item {
    int id;
    char name[50];
};
int main() {

    int n;
    scanf("%d", &n);
    struct Item *items = (struct Item*)malloc(n * sizeof(struct Item));

    if(items == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for(int i = 0; i < n; i++) {
        scanf("%d", &items[i].id);
        scanf("%s", items[i].name);
    }

    int choice;
    while(1) {
        printf("\n1. Add Item\n2. Delete Item\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            n++;
            items = realloc(items, n * sizeof(struct Item));

            if(items == NULL) {
                printf("Reallocation failed!\n");
                return 1;
            }
            scanf("%d", &items[n-1].id);
        
            scanf("%s", items[n-1].name);
        }

        else if(choice == 2) {
            int deleteId;
            scanf("%d", &deleteId);

            int found = -1;

            for(int i = 0; i < n; i++) {
                if(items[i].id == deleteId) {
                    found = i;
                    break;
                }
            }

            if(found == -1) {
                printf("Item not found!\n");
            } else {
                for(int i = found; i < n-1; i++) {
                    items[i] = items[i+1];
                }
                n--;

                items = realloc(items, n * sizeof(struct Item));
            }
        }

        else if(choice == 3) {
            for(int i = 0; i < n; i++) {
                printf("ID: %d  Name: %s\n", items[i].id, items[i].name);
            }
        }

        else if(choice == 4) {
            break;
        }

        else {
            printf("Invalid choice!\n");
        }
    }
    free(items); 
    return 0;
}