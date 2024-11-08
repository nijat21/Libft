#include "../libft.h"

int main()
{
    int *arr;
    int i;

    arr = (int *)ft_calloc(5, sizeof(int));
    if (!arr)
    {
        printf("Memory allocation failed\n");
        return (1);
    }
    i = 0;
    while (i < 5)
    {
        printf("%i\n", arr[i]);
        i++;
    }
    free(arr);
    return (0);
}