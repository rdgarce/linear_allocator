#include "lin.h"

#define SIZE 512
char mem[SIZE];

int main() {

    lin alloc;
    lin_init(&alloc, mem, SIZE);

    char *ptr1 = lin_alloc(&alloc, 255);
    char *ptr2 = lin_alloc(&alloc, 257);
    check(ptr2 == NULL);
    lin_freeAll(&alloc);
}