/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 09:42:55 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/12 12:01:32 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	cpt;

	cpt = 0;
	while (src[cpt] != '\0' && cpt < n)
	{
		dest[cpt] = src[cpt];
		cpt++;
	}
	while (cpt < n)
	{
		dest[cpt] = '\0';
		cpt++;
	}
	return (dest);
}
