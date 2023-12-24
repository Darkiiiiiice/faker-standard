//
// Created by mariomang on 12/24/23.
//

#include <string.h>
#include "array.h"

Array *new_array(size_t size) {
    Array *array = (Array *) malloc(sizeof(Array));
    array->size = size;
    array->data = calloc(size, sizeof(int));
    return array;
}


bool alloc(Array *array, size_t size) {
    if (array == NULL) {
        return false;
    }

    int *temp = (int *) calloc(size, sizeof(int));
    if (!memmove(temp, array->data, sizeof(int) * array->size)) {
        free(temp);
        return false;
    }
    free(array->data);
    array->data = temp;
    array->size = size;
    return true;
}

bool append(Array *array, int element) {
    if (array == NULL || array->data == NULL) {
        return false;
    }
    if (!alloc(array, array->size + 1))
        return false;

    array->data[array->size - 1] = element;
    return true;
}

int get_element(Array *array, int index) {
    if (array == NULL || array->data == NULL) {
        return EOF;
    }

    if (index >= 0 && index < array->size) {
        return array->data[index];
    }

    return EOF;
}

bool set_element(Array *array, int element, int index) {
    if (array == NULL || array->data == NULL) {
        return false;
    }

    if (index < 0) {
        return false;
    }

    if (index < array->size) {
        array->data[index] = element;
        return true;
    }
    if (!alloc(array, index + 1))
        return false;
    array->data[index] = element;
    return true;
}

void free_array(Array *array) {
    free(array->data);
    free(array);
}

void print_array(Array *array) {
    printf("[");
    for (int i = 0; i < array->size; i++) {
        printf("%d ", array->data[i]);
    }
    printf("\b]\n");
}
