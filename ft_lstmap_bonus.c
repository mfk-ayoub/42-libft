/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:15:15 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/11/19 23:09:17 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*swi;
	void	*tmp;

	new = NULL;
	swi = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		tmp = f(lst->content);
		swi = ft_lstnew(tmp);
		if (!swi)
		{
			del(tmp);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, swi);
		lst = lst->next;
	}
	return (new);
}

/*
void *putstr(void *content)
{
	printf ("\n%s\n", (char *)content);
}

void del(void *content)
{
	free(content);
}

void dele(void *content)
{
    if (content)
    {
        free(content);
    }
}


int main(void)
{
	t_list *test;

	test = NULL;
	t_list *test1 = ft_lstnew(ft_strdup("ayoub"));
	t_list *test2 = ft_lstnew(ft_strdup("obito"));
	t_list *test3 = ft_lstnew(ft_strdup("elmfk"));
	ft_lstadd_back(&test, test2);
	ft_lstadd_back(&test, test3);
	ft_lstadd_front(&test, test1);

	int size;
	size = ft_lstsize(test);
	printf ("%d", size);
	
	t_list *testmap = ft_lstmap(test,putstr,del);
	ft_lstdelone(test3,dele);
	test2->next = NULL;
	printf ("\nafter deleone\n");

	t_list *tmp;
	tmp = test;

	while (tmp)
	{
		printf ("%s\n",(char *)tmp->content);
		tmp = tmp->next;
	}
	
}
*/
