/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:01:55 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/11 20:52:16 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_mem_itoa(int n)
{
	char	*str;
	int		size;

	size = 0;
	while ((unsigned int)n >= 10)
	{
		size++;
		n /= 10;
	}
	str = (char *)malloc(sizeof(char) * (size) + 2);
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strrev(char *str)
{
	int		size;
	int		index;
	char	temp;

	index = 0;
	size = ft_strlen(str) - 1;
	while (index < size)
	{
		temp = str[index];
		str[index] = str[size];
		str[size] = temp;
		index++;
		size--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				index;
	unsigned int	nb;

	index = 0;
	str = ft_mem_itoa((unsigned int)n);
	if (n < 0)
		nb = -n;
	else
		nb = n;
	if (!str)
		return (NULL);
	while (nb >= 10)
	{
		str[index++] = (nb % 10) + '0';
		nb /= 10;
	}
	str[index++] = (nb % 10) + '0';
	if (n < 0)
		str[index++] = '-';
	str[index] = '\0';
	str = ft_strrev(str);
	return (str);
}
