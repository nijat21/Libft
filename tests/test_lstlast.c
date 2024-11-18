#include "../libft.h"

static void free_list(t_list *lst)
{
    t_list *temp;

    while (lst)
    {
        temp = lst->next;
        free(lst);
        lst = temp;
    }
}

int main()
{
    t_list *first_node = (t_list *)malloc(sizeof(t_list));
    t_list *second_node = (t_list *)malloc(sizeof(t_list));
    t_list *third_node = (t_list *)malloc(sizeof(t_list));
    t_list *fourth_node = (t_list *)malloc(sizeof(t_list));

    first_node->next = second_node;
    second_node->next = third_node;
    third_node->next = fourth_node;
    fourth_node->next = NULL;

    printf("Original last node: %p\n", fourth_node);
    printf("Output last node: %p\n", ft_lstlast(first_node));

    free_list(first_node);
}