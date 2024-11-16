#include "../libft.h"

void sample(unsigned int i, char *s)
{
    printf("%c\n", *s);
    if (*s == 'o')
        *s = *s + i;
}

int main()
{
    char str[] = "Hello";
    void (*f)(unsigned int, char *) = sample;
    ft_striteri(str, f);
}