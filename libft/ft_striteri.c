/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:36 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/08 22:29:22 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	index = 0;
	if (!s || !f)
		return ;
	while (s[index])
	{
		f(index, &s[index]);
		index++;
	}
}
