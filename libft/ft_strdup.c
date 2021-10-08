/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:57:25 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/08 22:58:26 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	char	*temp;
	int		index;

	temp = (char *)s1;
	index = 0;
	cpy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!cpy)
		return (NULL);
	while (temp[index])
	{
		cpy[index] = temp[index];
		index++;
	}
	cpy[index] = '\0';
	return (cpy);
}
