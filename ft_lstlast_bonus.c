/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:30:24 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/11/18 00:06:27 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	node = NULL;
	while (lst)
	{
		if (lst->next == NULL)
			node = lst;
		lst = lst->next;
	}
	return (node);
}
/*

int main(void)
{
	t_list *test;
	test = NULL;

	t_list *test1 = ft_lstnew(ft_strdup("ayoub"));
	t_list *test2 = ft_lstnew(ft_strdup("obito"));
	t_list *test3 = ft_lstnew(ft_strdup("elmfk"));

	test = test1;
	test1->next = test2;
	test2->next = test3;
	test3->next = NULL;
	
	t_list *test4 = ft_lstlast(test);
	printf ("%s", (char *)test4->content);
	
}*/
