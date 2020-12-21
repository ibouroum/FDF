/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 06:43:26 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/15 06:44:36 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_prime(int nb)
{
	int	resultat;
	int	cpt;

	cpt = 2;
	resultat = 1;
	if (nb <= 1)
		return (0);
	while (cpt <= nb / 2)
	{
		if (nb % cpt == 0)
			resultat = 0;
		cpt++;
	}
	return (resultat);
}
