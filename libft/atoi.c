/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:56:34 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/04 21:04:22 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *str)
{
    int res;
    int sign;

    res = 0;
    sign = 1;
    while (*str == ' ' || *str == ' ')
        str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -sign;
        str++;
    }
    while (*str && *str >= '0' && *str <= '9')
    {
        res = (*str - '0') + (res * 10);
        str++;
    }
    return (res * sign);
}

int main(void)
{
    printf("%d\n", ft_atoi("-123"));
    return (0);
}