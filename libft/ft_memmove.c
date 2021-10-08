/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:57:13 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/08 22:57:40 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_2;
	const char	*src_2;

	if (!dst && !src)
		return (0);
	if (dst == src || len == 0)
		return (dst);
	dst_2 = (char *)dst;
	src_2 = (const char *)src;
	if (src < dst)
	{
		while (len-- > 0)
			dst_2[len] = src_2[len];
	}
	else
	{
		while (len-- > 0)
		{
			*dst_2 = *src_2;
			dst_2++;
			src_2++;
		}
	}
	return (dst);
}
