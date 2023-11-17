/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:07:47 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/11/07 14:25:06 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		all_size;
	char	*result;
	int		index;

	index = 0;
	all_size = ft_strlen(s1) + ft_strlen(s2);
	result = malloc((all_size * sizeof(char)) + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		result[index] = *s1++;
		index++;
	}
	while (*s2 != '\0')
	{
		result[index] = *s2++;
		index++;
	}
	result[index] = '\0';
	return (result);
}
