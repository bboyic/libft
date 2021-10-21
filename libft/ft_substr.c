/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 22:49:43 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/12 14:56:59 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		index;
	size_t	size;

	if (!s)
		return (NULL);
	index = 0;
	size = ft_strlen(&s[start]) + 1;
	if (size > len)
		size = len + 1;
	str = (char *)malloc(sizeof(char) * size);
	if (!str || !s)
		return (NULL);
	while (s[start + index] && index < (int)len && ft_strlen(s) > start)
	{
		str[index] = s[start + index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
