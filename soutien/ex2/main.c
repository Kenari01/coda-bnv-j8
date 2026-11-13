#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int main()
{
    int list1[5] = {45, 28, 33, -7, -34};
    int list2[7] = {89, -22, -39, 47, 76, 42, 0};
    int list3[4] = {-512, 128, -256, 1024};
    int **numbers = malloc(4 * sizeof(*numbers));

    numbers[3] = NULL;
    numbers[0] = malloc(5 * sizeof(int));
    numbers[1] = malloc(7 * sizeof(int));
    numbers[2] = malloc(4 * sizeof(int));

    copy_numbers(list1, numbers[0], 5);
    copy_numbers(list2, numbers[1], 7);
    copy_numbers(list3, numbers[2], 4);

    printf("Liste 1 : plus petit %d, plus grand %d\n", get_smallest_number(numbers[0], 5), get_biggest_number(numbers[0], 5));
    printf("Liste 2 : plus petit %d, plus grand %d\n", get_smallest_number(numbers[1], 7), get_biggest_number(numbers[1], 7));
    printf("Liste 3 : plus petit %d, plus grand %d\n", get_smallest_number(numbers[2], 4), get_biggest_number(numbers[2], 4));

    free_int_tabs(numbers);
}