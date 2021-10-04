/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:36:06 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/04 21:39:53 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*temp;
	int		needle_size;

	temp = 0;
	needle_size = ft_strlen(needle);
	while (*haystack && needle_size < len)
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

int main(void)
{
	char	a[] = "123456789";
	char	b[] = "2345";

	printf("%s", ft_strnstr(a, b, 5));
}
