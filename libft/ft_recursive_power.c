/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 06:45:51 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/15 06:46:45 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_recursive_power(int nb, int power)
{
	int resultat;

	resultat = 1;
	if (power < 0)
		return (0);
	if (power > 0)
		resultat = nb * ft_recursive_power(nb, power - 1);
	return (resultat);
}
