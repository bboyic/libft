/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:57:00 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/08 22:23:41 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			index;

	index = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*a == *b && ++index < n)
	{
		a++;
		b++;
	}
	return (*a - *b);
}
