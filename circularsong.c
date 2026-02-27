#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char song[50];
    struct node* next;
};

struct node* head = NULL;

void addSong(char name[]) {

    struct node* newNode = malloc(sizeof(struct node));
    strcpy(newNode->song, name);

    if(head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }

    struct node* temp = head;
    while(temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;
}

void removeSong(char name[]) {

    if(head == NULL)
        return;

    struct node *temp = head, *prev = NULL;

    if(strcmp(head->song, name) == 0) {

        if(head->next == head) {
            free(head);
            head = NULL;
            return;
        }

        while(temp->next != head)
            temp = temp->next;

        temp->next = head->next;
        free(head);
        head = temp->next;
        return;
    }

    prev = head;
    temp = head->next;

    while(temp != head && strcmp(temp->song, name) != 0) {
        prev = temp;
        temp = temp->next;
    }

    if(temp != head) {
        prev->next = temp->next;
        free(temp);
    }
}

void play(int k) {

    if(head == NULL)
        return;

    struct node* temp = head;

    for(int i = 0; i < k; i++) {
        printf("%s\n", temp->song);
        temp = temp->next;
    }
}

int main() {

    addSong("Song1");
    addSong("Song2");
    addSong("Song3");
    addSong("Song4");
    addSong("Song5");

    printf("Playing 8 songs:\n");
    play(8);

    printf("\nRemoving Song3\n");
    removeSong("Song3");

    printf("\nPlaying 8 songs again:\n");
    play(8);

    return 0;
}