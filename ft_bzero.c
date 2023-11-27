/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:01:46 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/11/01 18:16:35 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int main(void)
{	char s[] = "ayoub";
	ft_bzero(s,3);
	printf ("%s\n",s + 3);
	char st[] = "ayoub";
	ft_bzero(st,5);
	printf ("%s\n",st);
	char sr[] = "ayoub";
	ft_bzero(sr,2);
	printf ("%s\n",sr +  2);
}*/
