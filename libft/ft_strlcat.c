/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:09:52 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/10 00:07:39 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	dst_size;
	size_t	src_size;

	index = 0;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (dstsize == 0)
		return (src_size);
	if (dstsize < dst_size)
		return (dstsize + src_size);
	while (src[index] && dstsize > (dst_size + index))
	{
		dst[dst_size + index] = src[index];
		index++;
	}
	if (dstsize == (dst_size + index) && index > 0)
		dst[dst_size + index - 1] = '\0';
	else if (*dst)
		dst[dst_size + index] = '\0';
	return (dst_size + src_size);
}
