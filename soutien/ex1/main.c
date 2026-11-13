#include <stdlib.h>
#include <stdio.h>
#include "fonction.h"

int main()
{
    char **str_tab = malloc(4 * sizeof(*str_tab));
    str_tab[3] = NULL;

    str_tab[0] = str_cpy("La vie, l'univers et tout le reste");
    str_tab[1] = str_cpy("Que la Force soit avec vous.");
    str_tab[2] = str_rev("Happy Hunger Games!");

    print_tab(str_tab);
    free_tab(str_tab);
}