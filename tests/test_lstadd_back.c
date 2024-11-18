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

    t_list *new_node = (t_list *)malloc(sizeof(t_list));

    first_node->next = second_node;
    second_node->next = third_node;
    third_node->next = NULL;

    printf("Original new node: %p\n", new_node);
    ft_lstadd_back(&third_node, new_node);
    printf("Prev node->next: %p\n", third_node->next);

    free_list(first_node);
}