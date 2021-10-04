/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:32:16 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/04 21:04:02 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	while (*src && index < size)
	{
		dst[index] = src[index];
		index++;
	}
	return (index);
}

int main(void)
{
    char a[] = "abc";
    char b[10];
    ft_strlcpy(b, a, 10);
    printf("%s", b);
    return (0);
}