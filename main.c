
#include <stdio.h>

#include "types/ctype.h"
#include "tools/tools.h"

int main() {
    printf("Hello, World!\n");
    int a = 10;
    int b = 20;

    swap(&a, &b);

    printf("a = %d, b = %d\n", a, b);
}
