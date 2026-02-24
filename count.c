#include <stdio.h>
#include <string.h>

int main() {
    char text[200];
    char words[20][20];
    int count[20] = {0};
    int total = 0;

    fgets(text, sizeof(text), stdin);

    char *word = strtok(text, " \n");

    while(word != NULL) {
        int found = 0;

        for(int i = 0; i < total; i++) {
            if(strcmp(words[i], word) == 0) {
                count[i]++;
                found = 1;
                break;
            }
        }

        if(found == 0) {
            strcpy(words[total], word);
            count[total] = 1;
            total++;
        }

        word = strtok(NULL, " \n");
    }

    for(int i = 0; i < total; i++)
        printf("%s : %d\n", words[i], count[i]);

    return 0;
}