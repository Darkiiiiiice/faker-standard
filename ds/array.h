//
// Created by mariomang on 12/24/23.
//

#ifndef FAKER_STANDARD_ARRAY_H
#define FAKER_STANDARD_ARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct array_list {
    int *data;
    size_t size;
} Array;

Array *new_array(size_t size);

bool set_element(Array *array, int element, int index);

int get_element(Array *array, int index);

bool append(Array *array, int element);

void print_array(Array *array);

void free_array(Array *array);


#endif //FAKER_STANDARD_ARRAY_H
