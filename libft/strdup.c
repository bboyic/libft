/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:57:25 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/04 21:04:20 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(const char *s1)
{
	char	*cpy;
	char	*temp;
	int		index;

	temp = (char *)s1;
	cpy = (char *)ft_calloc(sizeof(char), ft_strlen(s1) + 1);
	while (temp[index])
	{
		cpy[index] = temp[index];
		index++;
	}
	cpy[index] = '\0';
	return (cpy);
}

int main(void)
{
	char	a[] = "0123456789";
	char	*b;
	char	*c;

	b = a;
	c = ft_strdup(b);
	printf("%s", c);
	free(c);
	return (0);
}