/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:46:21 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/11/26 18:57:33 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int main(void)
{
    t_list *list = ft_lstnew("World");
    ft_lstadd_front(&list, ft_lstnew("Hello"));

    int *x = malloc(sizeof(int));
    *x = 42;
    ft_lstadd_front(&list, ft_lstnew(x));

    t_list *current = list;
    while (current != NULL)
    {
        if (current->content != NULL)
        {
            if (current->content == x)
                printf("%d\n", *((int *)current->content));
            else
                printf("%s\n", (char *)current->content);
        }
        current = current->next;
    }
	
    printf("Size of the list: %d\n", ft_lstsize(list));
    return 0;
}
*/
