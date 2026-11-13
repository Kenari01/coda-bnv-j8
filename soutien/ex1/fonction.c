#include <stdlib.h>
#include <stdio.h>

int str_len(char *str)
{
    int len = 0;

    while (str[len] != '\0')
    {
        len = len + 1;
    }

    return(len);
}

char *str_cpy(char *str)
{
    int len = str_len(str);
    char *copy = malloc((len + 1) * sizeof(char));
    int i = 0;

    copy[len] = '\0';

    while (str[i] != '\0')
    {
        copy[i] = str[i];
        i = i + 1;
    }

    return(copy);
}

char *str_rev(char *str)
{
    int len = str_len(str);
    char *rev = malloc((len + 1) * sizeof(char));
    int i = 0;
    int j = len - 1;

    rev[len] = '\0';

    while (j >= 0)
    {
        rev[i] = str[j];
        i = i + 1;
        j = j - 1;
    }

    return(rev);
}

void print_tab(char **tab)
{
    int i = 0;
    int j = 0;

    while (tab[i] != NULL)
    {
        j = 0;     
         while (tab[i][j] != '\0')
        {
            printf("%c",tab[i][j]);
       
             j = j + 1;
        }
        
        printf("\n");
        i = i + 1;
    }

}

void free_tab(char **tab)
{
    int i = 0;

    while (tab[i] != NULL)
    {
        free(tab[i]);
        i = i + 1;
    }

    free(tab);
}