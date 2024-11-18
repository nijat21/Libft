#include "../libft.h"

static void free_node(void *val)
{
    free(val);
}

int main()
{
    t_list *first_node = (t_list *)malloc(sizeof(t_list));
    t_list *second_node = (t_list *)malloc(sizeof(t_list));

    first_node->next = second_node;
    first_node->content = malloc(10);
    t_list *next_node = first_node->next;

    printf("First node before: %p\n", first_node);
    printf("First node content before: %p\n", first_node->content);
    printf("First node->next: %p\n", first_node->next);

    void (*del)(void *) = free_node;
    ft_lstdelone(first_node, del);

    printf("First node content after: %s\n", (char *)first_node->content);
    printf("First node after: %p\n", next_node);
    printf("Second node: %p\n", second_node);

    free(second_node);
    return (0);
}