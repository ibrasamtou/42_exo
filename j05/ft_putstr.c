#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while(*str != '\0')
        ft_putchar(*str++);
}

int     main(void)
{
    ft_putstr("hello je m'appelle Ibrahim Samory Toure");
    return(0);
}