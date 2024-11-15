#include "../libft.h"

int main()
{
    char *str = "HiCbro,ChowCyouCdoing?";
    char *str1 = "      Hi        Cbro,C      how       CyouC     doing      ?";

    char **res = ft_split(str, 'C');
    char **res1 = ft_split(str1, 'C');

    int i = 0;
    while (i < 6)
    {
        printf("Res: %s\n", res[i]);
        i++;
    }
    i = 0;
    while (i < 6)
    {
        printf("Res1: %s\n", res1[i]);
        i++;
    }
}