/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:56:40 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/04 21:04:06 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

void    ft_bzero(void *s, size_t n)
{
    unsigned char   *res;

    res = (unsigned char *)s;
    while (n-- > 0)
    {
        *res = '\0';
        res++;
    }
}

int main(void)
{
    char a[] = "1234";
    char *b;

    b = a;
    printf("one: %s\n",b);
    ft_bzero(b, 1);
    b++;
    printf("two: %s\n", b);
    bzero(b, 1);
    //b++;
    printf("orig: %s\n", b);
    return (0);
}