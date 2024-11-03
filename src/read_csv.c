#include <stdio.h>
#include <stdlib.h>
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
    LinkedList* l = l_from(0, int, NULL);
    l_push(l, int, 420);

    printf("%d\n", *(int*)l_at(l, 1));
    printf("%d\n", *(int*)l_pop(l));

    l_free(l);
    return 0;
}