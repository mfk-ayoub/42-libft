/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:36:51 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/11/09 14:42:21 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			index;
	unsigned char	*s;

	s = (unsigned char *)(str);
	index = 0;
	while (index < n)
	{
		if (s[index] == (unsigned char)(c))
			return (&s[index]);
		index++;
	}
	return (0);
}
