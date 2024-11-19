#include "../libft.h"

static void free_node(void *val)
{
    free(val);
}

int main()
{
    t_list *first_node = (t_list *)malloc(sizeof(t_list));
    t_list *second_node = (t_list *)malloc(sizeof(t_list));
    t_list *third_node = (t_list *)malloc(sizeof(t_list));
    t_list *fourth_node = (t_list *)malloc(sizeof(t_list));

    first_node->content = malloc(10);
    second_node->content = malloc(10);
    third_node->content = malloc(10);
    fourth_node->content = malloc(10);

    first_node->next = second_node;
    second_node->next = third_node;
    third_node->next = fourth_node;
    fourth_node->next = NULL;

    printf("First node: %p\n", first_node);
    printf("First node next: %p\n", first_node->next);
    printf("Second node: %p\n", second_node);

    void (*del)(void *) = free_node;
    ft_lstclear(&first_node, del);

    if (!first_node)
        printf("List is empty\n");
}