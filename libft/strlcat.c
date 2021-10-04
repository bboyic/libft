/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:09:52 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/04 21:04:01 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	size;

	index = 0;
	size = 0;
	while (dst[size])
		size++;
	while (src[index] && (dstsize - 1) > (size + index))
	{
		dst[size + index] = src[index];
		index++;
	}
	dst[size + index] = '\0';
	return (size + index);
}

int main(void)
{
    char a[20] = "123 ";
    char b[20] = "abcdefg";
    char *c;
    char *d;
    
    c = a;
    d = b;
    ft_strlcat(c, d, 10);
    printf ("%s", c);
    return (0);
}