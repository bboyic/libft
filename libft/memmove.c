/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:57:13 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/04 21:04:04 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_2;
	const char	*src_2;

	if (!dst && !src)
		return (0);
	if (dst == src || len == 0)
		return (dst);
	dst_2 = (char *)dst;
	src_2 = (const char *)src;
	while (len-- > 0)
		dst_2[len] = src_2[len];
	return (dst);
}

int main(void)
{
    char	a[] = "0123456789\0";
    char	c[11];
    char	*b;

    b = a;
    printf("%s\n", b);
    printf("{%s}\n", c);
    memmove(c, a, 4);
    //ft_memmove(c, a, 4);
    printf("%s\n", c);

    return (0);
}