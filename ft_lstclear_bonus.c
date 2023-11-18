/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:18:51 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/11/18 00:40:47 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node_del;
	t_list	*tmp;

	node_del = *lst;
	if (lst != NULL && del != NULL)
	{
		while (node_del != NULL)
		{
			tmp = node_del->next;
			if (node_del->content != NULL)
			{
				del(node_del->content);
			}
			free(node_del);
			node_del = tmp;
		}
	}
	*lst = '\0';
}
