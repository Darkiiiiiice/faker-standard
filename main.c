
#include <stdio.h>
#include <assert.h>

#include "types/ctype.h"
#include "tools/tools.h"
#include "ds/array.h"

int main() {
    printf("Hello, World!\n");
    int a = 10;
    int b = 20;

    swap(&a, &b);

    printf("a = %d, b = %d\n", a, b);

    Array *array = new_array(10);
    print_array(array);
    set_element(array, 10, 0);
    print_array(array);
    set_element(array, 9, 9);
    print_array(array);
    set_element(array, 10, 10);
    print_array(array);
    set_element(array, 15, 15);
    print_array(array);
    set_element(array, -1, -1);
    print_array(array);

    a = get_element(array, -1);
    assert(a == -1);
    a = get_element(array, 0);
    assert(a == 10);
    a = get_element(array, 9);
    assert(a == 9);
    a = get_element(array, 10);
    assert(a == 10);
    a = get_element(array, 15);
    assert(a == 15);
    a = get_element(array, 20);
    assert(a == -1);

    append(array, 20);
    print_array(array);
    a = get_element(array, 16);
    assert(a == 20);



    free_array(array);
}
