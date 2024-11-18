#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    if (!lst || !del)
        return;
    temp = *lst;
    while (temp)
    {
        temp = (*lst)->next;
        printf("Freed %p\n", lst);
        free(*lst);
    }
    *lst = NULL;
}