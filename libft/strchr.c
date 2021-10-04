/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:57:19 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/04 21:03:59 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	while (*s && *s != c)
		s++;
	return ((char *)s);
}

int main(void)
{
    char    a[] = "0123456789\0";
    char    *b;

    b = a;
    printf("%s\n", b);
    printf("orig: %s\n",strchr(b, '4'));
    printf("my: %s\n", ft_strchr(b, '4'));
    return (0);
}