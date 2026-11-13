#include <stdlib.h>
#include <stdio.h>

int get_biggest_number(int *numbers, int size)
{
    int i = 0;
    int max = numbers[0];
    while ( i < size )
    {
     if ( numbers[i] > max )
     {
        max = numbers[i];
     }
     
        i = i+ 1;
    }
    return (max);
}

int get_smallest_number(int *numbers, int size)
{
    int i = 0;
    int min = numbers[0];
    while ( i < size )
    {
     if ( numbers[i] < min )
     {
        min = numbers[i];
     }
     
        i = i+ 1;
    }
    return (min);
}

void free_int_tabs(int **numbers)
{
    int i = 0;

    while (numbers[i] != NULL)
    {
        free(numbers[i]);
        i = i + 1;
    }

    free(numbers);
}

void copy_numbers(int *source, int *numbers, int length)
{
    int i = 0;

    while (i < length)
    {
        numbers[i] = source[i];
        i = i + 1;
    }
}