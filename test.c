#include <stdio.h>

void ft_param_pointer(char *param) {
    // Ici, `param` est un pointeur vers le premier caractère de la chaîne
    printf("Adresse du premier caractère : %p\n", (void *)param); // adresse de 'h'
    printf("Premier caractère : %c\n", *param); // affichera 'h'
}

int     main(void)
{
    ft_param_pointer("hello");
    return(0);
}