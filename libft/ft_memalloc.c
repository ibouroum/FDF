/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 10:32:46 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/07 22:30:25 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *tab;

	if ((tab = malloc(sizeof(size_t) * size)) == NULL)
		return (NULL);
	ft_bzero(tab, size);
	return (tab);
}
