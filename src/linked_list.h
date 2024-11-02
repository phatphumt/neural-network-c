#ifndef COOLEST_LINKED_LIST_LIBRARY
#define COOLEST_LINKED_LIST_LIBRARY

typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

typedef struct LinkedList {
    Node* head;
    Node* tail;
} LinkedList;

LinkedList* create_linkedlist(int data);
void push(LinkedList* ll, int data);
int pop(LinkedList* ll);
void traverse(LinkedList* l);
void free_linkedlist(LinkedList* l);
int linkedlist_index(LinkedList* l, int idx);

#endif