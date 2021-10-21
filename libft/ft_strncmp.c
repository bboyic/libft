/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:35:49 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/09 21:58:21 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (n);
	while (*s1 && *s1 == *s2 && n - 1 > 0)
	{
		++s1;
		++s2;
		--n;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
