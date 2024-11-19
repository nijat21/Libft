#include "../libft.h"

static void *modif_content(void *content)
{
    void *new_cont;

    new_cont = malloc(10);
    ft_memcpy(new_cont, content, 5);
    ft_memcpy(new_cont, "hell", 5);
    return new_cont;
}

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

    printf("Node1 content before: %s\n", (char *)first_node->content);
    printf("Node2 content before: %s\n", (char *)second_node->content);
    printf("Last node content before: %s\n", (char *)fourth_node->content);

    void *(*f)(void *) = modif_content;
    void (*del)(void *) = free_node;

    t_list *new_list = ft_lstmap(first_node, f, del);
    t_list *temp;

    temp = new_list;
    while (temp)
    {
        printf("New list nodes: %s\n", (char *)temp->content);
        temp = temp->next;
    }

    if (!first_node)
        printf("List is empty\n");
}