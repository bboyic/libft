/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:08:15 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/12 14:56:33 by aconchit         ###   ########.fr       */
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

char	*ft_endstring(char *str, int index)
{
	--index;
	while (ft_isspace(str[index]) && index > 0)
		index--;
	str[index + 1] = '\0';
	return (str);
}

int	ft_smallcmp(char s, const char *set)
{
	while (*set)
	{
		if (s == *set)
			return (1);
		set++;
	}
	return (0);
}

int	ft_memrtim(const char *s1, const char *set)
{
	size_t	size;

	size = 0;
	while (*s1)
	{
		s1++;
		size++;
	}
	s1--;
	while (ft_smallcmp(*s1, set) && size > 0)
	{
		size--;
		s1--;
	}
	return (size + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		index;
	int		size;

	index = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_smallcmp(*s1, set) && *s1)
		s1++;
	size = ft_memrtim(s1, set);
	if (size == 0)
		return (ft_strdup(s1));
	new_str = (char *)malloc(sizeof(char) * (size));
	if (!new_str)
		return (NULL);
	while (*s1 && index < size - 1)
	{
		new_str[index] = *s1;
		index++;
		if (index >= size)
			new_str[index - 1] = '\0';
		s1++;
	}
	new_str[index] = '\0';
	return (new_str);
}
