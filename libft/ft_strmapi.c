/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:20:01 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/08 22:29:30 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		index;

	if (!s || !f)
		return (NULL);
	index = 0;
	str = ft_strdup(s);
	if (!str)
		return (0);
	while (str[index])
	{
		str[index] = f(index, str[index]);
		index++;
	}
	return (str);
}
