/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:05:20 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/11/25 22:38:08 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
	{
		return (NULL);
	}
	new->content = content;
	new->next = NULL;
	return (new);
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
	t_list *tmp;
	tmp = test;
	while (tmp)
	{
		printf ("%s\t",(char *)tmp->content);
		tmp = tmp->next;
	}
	
}*/
