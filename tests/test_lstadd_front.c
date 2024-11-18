#include "../libft.h"

int main()
{
    t_list *first_node = (t_list *)malloc(sizeof(t_list));
    t_list *new_node = (t_list *)malloc(sizeof(t_list));

    printf("New node next before: %p\n", new_node->next);
    printf("First node before: %p\n", first_node);
    ft_lstadd_front(&first_node, new_node);
    printf("New node next after: %p\n", new_node->next);
    printf("First node after: %p\n", first_node);
}