#include <stdio.h>

#define SIZE 5

int main() {

    int queue[SIZE];
    int a = -1;   
    int b = -1;  
    int choice, value;

    while(1) {
        scanf("%d", &choice);
        if(choice == 1) {

            if( (b + 1) % SIZE == a ) {
                printf("Queue is Full\n");
            }
            else {
                printf("Enter value: ");
                scanf("%d", &value);

                if(a == -1) 
                    a = 0;

                b = (b + 1) % SIZE;
                queue[b] = value;
            }
        }
        else if(choice == 2) {

            if(a == -1) {
                printf("Queue is Empty\n");
            }
            else {
                printf("Deleted: %d\n", queue[a]);

                if(a == b) {   
                    a = -1;
                    b = -1;
                }
                else {
                    a = (a + 1) % SIZE;
                }
            }
        }

        // DISPLAY
        else if(choice == 3) {

            if(a == -1) {
                printf("Queue is Empty\n");
            }
            else {
                int i = a;

                printf("Queue: ");
                while(1) {
                    printf("%d ", queue[i]);

                    if(i == b)
                        break;

                    i = (i + 1) % SIZE;
                }
                printf("\n");
            }
        }

        else if(choice == 4) {
            break;
        }

        else {
            printf("Invalid choice\n");
        }
    }
    return 0;
}