/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:56:43 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/04 21:04:21 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void	*res;
	int		index;

	index = 0;
	res = (void *)malloc(count * size);
	if (!res)
		return (0);
	while (index < size)
		((char *)(res))[index++] = 0;
	return(res);
}