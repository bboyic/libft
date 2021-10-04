/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:54:40 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/04 21:04:07 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;
	size_t			index;

	index = 0;
	temp = (unsigned char *)b;
	while (index < len)
		temp[index++] = c;
	return (b);
}

int main(void)
{
    char    c[12];

    c[11] = '\0';
    memset(c, '1', 11);
    printf("%s", c);
    return (0);
}
