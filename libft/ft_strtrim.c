/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:08:15 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/08 22:49:15 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char	c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\f' \
	|| c == '\r' || c == '\n' || c == '\f')
		return (1);
	return (0);
}

int	ft_create_mem_trim(char const *s1, char const *set, int set_size)
{
	int	index;

	index = 0;
	while (ft_isspace(*s1) && *s1)
		s1++;
	while (*s1)
	{
		if (ft_strncmp(s1, set, set_size) == 0)
			s1 += set_size;
		index++;
		if (*s1)
			s1++;
	}
	s1--;
	while (ft_isspace(*s1) && *s1 && index > 0)
	{
		s1--;
		index--;
	}
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		size;
	int		set_size;
	int		index;

	if (!s1 || !set)
		return (NULL);
	index = 0;
	set_size = ft_strlen(set);
	while (ft_isspace(*s1) && *s1)
		s1++;
	size = ft_strlen(s1) + set_size;
	str = (char *)malloc(sizeof(char) * \
	(ft_create_mem_trim(s1, set, set_size) + 1));
	if (!str)
		return (NULL);
	while (*s1)
	{
		if (ft_strncmp(s1, set, set_size) == 0)
			s1 += set_size;
		str[index++] = *(s1++);
	}
	while (ft_isspace(str[--index]) && index > 0)
		str[index] = '\0';
	return (str);
}
