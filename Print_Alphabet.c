#include <unistd.h>

void   ft_print_alphabet(void)
{
    short c;

    c = 96;
    while (++c < 123)
        write(1, &c, 1);
}
void    ft_print_alphabet2(void)
{
    short c;

    c = '`';
    while (++c <= 'z')
        write(1, &c, 1);
}

int main(void)
{
    ft_print_alphabet();
    write(1, "\n", 1);
    ft_print_alphabet2();
    write(1, "\n", 1);
}


