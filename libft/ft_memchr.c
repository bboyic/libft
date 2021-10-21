/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:56:56 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/12 14:55:26 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*a;
	unsigned char		b;

	b = c;
	a = s;
	if (n == 0)
		return (NULL);
	while (n-- > 0)
	{
		if (*a == b)
			return ((void *)a);
		a++;
	}
	return (NULL);
}
