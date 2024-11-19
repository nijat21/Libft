#include "../libft.h"

static void modif_content(void *content)
{
    ft_memcpy(content, "Hello", 5);
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

    printf("Node1 content before: %s\n", (char *)first_node->content);
    printf("Node2 content before: %s\n", (char *)second_node->content);
    printf("Last node content before: %s\n", (char *)fourth_node->content);

    void (*f)(void *) = modif_content;
    ft_lstiter(first_node, f);

    printf("Node1 content after: %s\n", (char *)first_node->content);
    printf("Node2 content after: %s\n", (char *)second_node->content);
    printf("Last node content after: %s\n", (char *)fourth_node->content);

    if (!first_node)
        printf("List is empty\n");
}