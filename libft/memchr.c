/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:56:56 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/04 21:03:55 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	char	*a;
	char	b;

	b = c;
	a = (char *)s;
	while (*a && *a != b && n-- > 0)
		a++;
	return (a);
}

int main(void)
{
	char    a[11] = "0123456789\0";
	char    *b;

	b = a;
	printf("my: %s\n", (char *)ft_memchr(b, '3', 5));
	printf("orig: %s\n", (char *)memchr(b, '3', 5));
	//printf("%s", b);
}