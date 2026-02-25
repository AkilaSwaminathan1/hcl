#include <stdio.h>
#include <string.h>
int main() {

    char str[100];
    char stack[100];
    int top = -1;
    scanf("%s", str);
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
            top++;
            stack[top] = str[i];
        }
        else if(str[i] == ')' || str[i] == '}' || str[i] == ']') {
            if(top == -1) {
                printf("Not Balanced\n");
                return 0;
            }

            char ch = stack[top];
            top--;
            if( (ch == '(' && str[i] != ')') ||
                (ch == '{' && str[i] != '}') ||
                (ch == '[' && str[i] != ']') ) {

                printf("Not Balanced\n");
                return 0;
            }
        }
    }

    if(top == -1)
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}