/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:33:15 by aconchit          #+#    #+#             */
/*   Updated: 2021/10/08 22:26:01 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = 0;
	while (*lst)
	{
		if ((*lst)->content)
			del((*lst)->content);
		temp = *lst;
		*lst = (*lst)->next;
		free(temp);
	}
	lst = NULL;
}
