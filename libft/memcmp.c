/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:57:00 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/04 21:03:54 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (*a && *a == *b && n > 0)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

int main(void)
{
    char    a[11] = "\200";
    char    *b;

    b = a;
    printf("orig: %d\n", memcmp(b, "\0", 1));
    printf("my: %d\n", ft_memcmp(b, "\0", 1));
    return (0);
}