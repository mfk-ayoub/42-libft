/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:16:41 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/11/01 18:15:34 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*str;
	unsigned char	v;
	size_t			i;

	v = (unsigned char)x;
	str = ptr;
	i = 0;
	while (i < n)
	{
		str[i] = v;
		i++;
	}
	return (ptr);
}
