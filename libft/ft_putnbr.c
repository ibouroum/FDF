/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:28:41 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/09 16:28:45 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	long int a;

	a = nb;
	if (a < 0)
	{
		ft_putchar('-');
		a = a * -1;
	}
	if (a >= 10)
	{
		ft_putnbr(a / 10);
	}
	ft_putchar(a % 10 + 48);
}
