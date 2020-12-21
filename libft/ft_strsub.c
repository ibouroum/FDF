/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:03:49 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/12 22:34:52 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;

	if (!s)
		return (0);
	if (((fresh = ft_strnew(len)) == 0))
		return (0);
	ft_strncpy(fresh, s + start, len);
	return (fresh);
}
