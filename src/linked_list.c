#include "linked_list.h"

#include <stdio.h>
#include <stdlib.h>

LinkedList* create_linkedlist(int data) {
    Node* head_node = (Node*)malloc(sizeof(Node));
    head_node->data = data;
    head_node->next = NULL;
    head_node->prev = NULL;

    LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
    list->head = head_node;
    list->tail = head_node;
    return list;
}

void push(LinkedList* ll, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    ll->tail->next = new_node;

    new_node->prev = ll->tail;
    new_node->next = NULL;
    ll->tail = new_node;
}

int pop(LinkedList* ll) {
    Node* old_tail = ll->tail;
    int old_tail_data = old_tail->data;
    ll->tail = ll->tail->prev;
    ll->tail->next = NULL;
    free(old_tail);

    return old_tail_data;
}

void traverse(LinkedList* l) {
    Node* temp = l->head;
    printf("[");
    while (temp != NULL) {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("]\n");
}

void free_linkedlist(LinkedList* l) {
    Node* temp = l->head;
    while (temp != NULL) {
        if (temp != l->head) {
            free(temp->prev);
        }
        temp = temp->next;
    }
    free(l->tail);
    free(l);
}

int linkedlist_index(LinkedList* l, int idx) {
    Node* temp = l->head;

    for (int count = 0; temp != NULL && count < idx; count++) temp = temp->next;

    return temp->data;
}

// int main() {
//     LinkedList* l = create_linkedlist(1);
//     push(l, 2);
//     push(l, 3);
//     push(l, 4);
//     push(l, 5);
//     traverse(l);
//     pop(l);
//     traverse(l);
//     printf("%d\n", linkedlist_index(l, 1));
//     free_linkedlist(l);
// }