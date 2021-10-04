/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:57:08 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/04 21:04:05 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_2;
	const char	*src_2;

	if (dst == src || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dst_2 = (char *)dst;
	src_2 = (const char *)src;
	while (n--)
		dst_2[n] = src_2[n];
	return (dst);
}

int main(void)
{
	char	a[] = "0123456789\0";
	char	c[11];
	char	*b;

	b = a;
	printf ("%s\n", b);
	printf ("{%s}\n", c);
	ft_memcpy(c, a, 9);
	printf ("%s\n", c);
	return (0);
}