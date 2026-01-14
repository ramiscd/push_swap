#include "../includes/push_swap.h"
#include "../libft/libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    int     i;
    long    value;
    int     error;

    if (argc < 2)
        return (0);

    i = 1;
    while (i < argc)
    {
        if (!is_valid_number(argv[i]))
        {
            printf("Error\n");
            return (1);
        }

        value = ft_atol_strict(argv[i], &error);
        if (error)
        {
            printf("Error\n");
            return (1);
        }

        printf("OK: %ld\n", value);
        i++;
    }
    return (0);
}
