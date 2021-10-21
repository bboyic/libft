/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:29:13 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/12 14:55:57 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_create_mem(const char *s, char c)
{
	int		size;
	char	**words;

	if (!s)
		return (NULL);
	size = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		while (*s != c && *s)
			s++;
		size++;
		if (*s)
			s++;
	}
	if (*(--s) != c && size > 1)
		size++;
	words = (char **)malloc(sizeof(char *) * (size + 1));
	if (!words)
		return (NULL);
	words[size] = 0;
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
	if (!(*s))
		words[0] = "";
	index = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			words[index++] = ft_create_word(s, c);
		if (*s && !words[index - 1])
		{
			ft_clear(words);
			return (NULL);
		}
		while (*s && *s != c)
			s++;
	}
	words[index] = 0;
	return (words);
}
