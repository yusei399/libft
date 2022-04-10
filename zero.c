#include <stdio.h>
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
    unsigned int i;
    char     *str;

    str = (char *)s;
    i = 0;
    while (i < 0)
    {
        *(str + i) = 0;
        i++;
    }
}

int main(void)
{
    size_t n;
    void    *s;
    n = 5;

    ft_bzero(s,n);
}