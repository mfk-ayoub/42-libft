/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:12:28 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/11/18 00:07:54 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)(dest);
	str2 = (unsigned char *)(src);
	i = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	if (str1 > str2)
	{
		while (count--)
		{
			str1[count] = str2[count];
		}
	}
	else
	{
		while (count > i)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	return (dest);
}
