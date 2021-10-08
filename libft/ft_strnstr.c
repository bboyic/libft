/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:36:06 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/06 17:48:35 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*temp;
	size_t	needle_size;

	temp = 0;
	needle_size = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len-- >= needle_size)
	{
		if (ft_strncmp(haystack, needle, needle_size) == 0)
		{
			temp = (char *)haystack;
			return (temp);
		}
		haystack++;
	}
	return (temp);
}
