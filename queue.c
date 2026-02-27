#include <stdio.h>

#define SIZE 100

int main() {

    int stack1[SIZE], stack2[SIZE];
    int top1 = -1, top2 = -1;
    int choice, value;

    while(1) {

        printf("1 Insert 2 Delete 3 Display 4 Exit\n");
        scanf("%d", &choice);

        if(choice == 1) {

            scanf("%d", &value);
            top1++;
            stack1[top1] = value;
        }

        else if(choice == 2) {

            if(top1 == -1 && top2 == -1) {
                printf("Empty\n");
            }
            else {

                if(top2 == -1) {
                    while(top1 != -1) {
                        top2++;
                        stack2[top2] = stack1[top1];
                        top1--;
                    }
                }

                printf("Deleted %d\n", stack2[top2]);
                top2--;
            }
        }

        else if(choice == 3) {

            if(top1 == -1 && top2 == -1) {
                printf("Empty\n");
            }
            else {

                for(int i = top2; i >= 0; i--)
                    printf("%d ", stack2[i]);

                for(int i = 0; i <= top1; i++)
                    printf("%d ", stack1[i]);

                printf("\n");
            }
        }
        else if(choice == 4) {
            break;
        }
    }
    return 0;
}