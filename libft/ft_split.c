/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:29:13 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/08 22:29:12 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_create_mem(const char *s, char c)
{
	int		size;
	char	**words;

	size = 0;
	while (*s)
	{
		if (*s == c)
			size++;
		s++;
	}
	words = (char **)malloc(sizeof(char *) * (size + 2));
	if (!words)
		return (NULL);
	return (words);
}

char	*ft_create_word_mem(const char *s, char c)
{
	int		size;
	char	*word;

	size = 0;
	while (*s != c && *s)
	{
		s++;
		size++;
	}
	word = (char *)malloc(sizeof(char) * (size + 1));
	if (!word)
		return (NULL);
	word[size] = 0;
	return (word);
}

char	*ft_create_word(const char *s, char c)
{
	int		index;
	char	*word;

	index = 0;
	word = ft_create_word_mem(s, c);
	if (!word)
		return (NULL);
	while (*s && *s != c)
	{
		word[index++] = *s;
		s++;
	}
	word[index] = 0;
	return (word);
}

void	ft_clear(char **str)
{
	while (*str)
	{
		free(*str);
		str++;
	}
	free(str);
	str = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		index;

	words = ft_create_mem(s, c);
	if (!s || !words)
		return (NULL);
	index = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		words[index++] = ft_create_word(s, c);
		if (!words[index - 1])
		{
			ft_clear(words);
			return (NULL);
		}
		while (*s && *s != c)
			s++;
	}
	if (index > 1)
		words[--index] = 0;
	else
		words[index] = 0;
	return (words);
}
