/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:40:33 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/12 22:09:22 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	size;
	char	*fresh;

	i = 0;
	if (!s)
		return (0);
	size = ft_strlen(s);
	if ((fresh = ft_strnew(ft_strlen(s))) == 0)
		return (0);
	while (i < size)
	{
		fresh[i] = (f)(i, s[i]);
		i++;
	}
	return (fresh);
}
