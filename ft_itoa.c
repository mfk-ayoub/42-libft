/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:15:33 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/11/12 22:11:56 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_numb(long int n)
{
	int	count;

	count = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	ft_is_negative(int *sign, long int *nb)
{
	if (*nb < 0)
	{
		*sign = 1;
		*nb *= -1;
	}
}

char	*ft_itoa(int n)
{
	int			sign;
	long int	num;
	int			count;
	char		*res;

	sign = 0;
	num = (long int)n;
	ft_is_negative(&sign, &num);
	count = ft_count_numb(num);
	res = (char *)malloc((count + sign + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	if (sign == 1)
		res[0] = '-';
	res[count + sign] = '\0';
	while (count > 0)
	{
		res[sign + count - 1] = (num % 10) + 48;
		num /= 10;
		count--;
	}
	return (res);
}
