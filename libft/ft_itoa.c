/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 23:17:18 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/15 05:06:22 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_temp(char *integer, int n, char *temp)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	k;

	j = 0;
	k = 0;
	i = ft_len_integer(n);
	if (n < 0)
	{
		n *= -1;
		integer[k++] = '-';
		i--;
	}
	while (j < i)
	{
		temp[j++] = (n % 10) + '0';
		n /= 10;
	}
	while (i)
	{
		integer[k++] = temp[i - 1];
		i--;
	}
	integer[k] = '\0';
	return (integer);
}

static char	*ft_zero(char *str)
{
	str = malloc(sizeof(char) * 2);
	str[0] = 48;
	str[1] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	unsigned int	i;
	char			*integer;
	char			*temp;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	integer = NULL;
	i = ft_len_integer(n);
	if (n == 0)
		return (ft_zero(integer));
	if ((temp = malloc(sizeof(char) * i)) == 0)
		return (0);
	if ((integer = malloc(sizeof(char) * i + 1)) == 0)
		return (0);
	return (ft_temp(integer, n, temp));
}
