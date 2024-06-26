#ifndef ALGOS_H
#define ALGOS_H

/** default headers **/
#include <stdio.h>
#include <stdlib.h>


/** functions prototypes **/

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif
