/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:56:56 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/08 22:50:21 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*a;
	char	b;

	b = c;
	a = (char *)s;
	while (*a && *a != b && n-- > 0)
		a++;
	if (*a == b)
		return (a);
	return (0);
}
