/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 11:23:16 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/12 22:34:25 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tab;
	int		len;

	len = (int)size;
	if ((tab = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	ft_memset(tab, 0, len + 1);
	return (tab);
}
