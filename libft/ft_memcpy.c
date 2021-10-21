/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:57:08 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/09 20:16:09 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
