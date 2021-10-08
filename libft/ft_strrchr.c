/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:57:37 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/08 22:51:23 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		size;

	size = ft_strlen(s);
	str = (char *)s;
	while (size > 0 && str[size] != c)
	{
		size--;
	}
	if (str[size] == c)
		return (&str[size]);
	return (0);
}
