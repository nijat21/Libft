#include "../libft.h"

int main(void)
{
    int content = 30;
    int *res = ft_lstnew(&content)->content;
    printf("%i\n", *res);
}