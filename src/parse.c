#include "../includes/push_swap.h"
#include "../libft/libft.h"
#include <stdio.h>

int is_valid_number(char *s)
{
    int i;

    if (!s || !s[0])
        return (0);
    i = 0;
    if (s[i] == '+' || s[i] == '-')
        i++;
    if (!s[i])
        return (0);
    while (s[i])
    {
        if (!ft_isdigit(s[i]))
            return (0);
        i++;
    }
    return (1);
}

long ft_atol_strict(char *s, int *error)
{
    long result;
    int sign;

    result = 0;
    sign = 1;
    *error = 0;

    if (*s == '+' || *s == '-')
    {
        if (*s == '-')
            sign = -1;
        s++;
    }
    while (*s)
    {
        result = result * 10 + (*s - '0');
        if ((sign == 1 && result > INT_MAX)
            || (sign == -1 && -result < INT_MIN))
        {
            *error = 1;
            return (0);
        }
        s++;
    }
    return (result * sign);
}