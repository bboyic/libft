/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:56:40 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/08 22:25:42 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*res;

	res = (unsigned char *)s;
	while (n-- > 0)
	{
		*res = '\0';
		res++;
	}
}
