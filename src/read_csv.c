#include <stdio.h>
#define MAX 50
#include "linked_list.h"

/*
expected output,
8-bit grayscale pixel of 28x28 img.
*/

typedef struct Img {
    unsigned short expected_output;
    char data[784];
} Img;

Img** get_data(char* filename) {
    FILE* f;
    f = fopen(filename, "r");
    char buffer[MAX];

    while (fgets(buffer, sizeof(buffer), f) != NULL) {
        for (int i = 0; i < sizeof(buffer); i++) {
        }
    }
    fclose(f);
    // get 28x28 then arr.push() then return arr
    Img img;
}

int main() {
    LinkedList* l = create_linkedlist(69);
    push(l, 420);
    traverse(l);
    printf("%d\n", linkedlist_index(l, 1));
    printf("%d\n", pop(l));
    traverse(l);
    free_linkedlist(l);
    return 0;
}