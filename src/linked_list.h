#ifndef COOLEST_LINKED_LIST_LIBRARY
#define COOLEST_LINKED_LIST_LIBRARY

typedef struct Node {
    void* data;
    struct Node* prev;
    struct Node* next;
} Node;

typedef struct LinkedList {
    Node* head;
    Node* tail;
} LinkedList;

#define new(x) (x*)malloc(sizeof(x))
#define l_from(len, dtype, data) _l_from(len, sizeof(dtype), data)
#define l_push(ll, dtype, data) _l_push(ll, sizeof(dtype), (void*)data)

LinkedList* _l_from(int length, unsigned int sz, void* data);
void l_free(LinkedList* ll);
int l_length(LinkedList* ll);
void* l_at(LinkedList* ll, int idx);
void _l_push(LinkedList* ll, unsigned int sz, void* data);
void* l_pop(LinkedList* ll);
char* l_tostring(LinkedList* ll, char* print_str);

#endif