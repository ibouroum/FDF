/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 22:36:58 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/12 23:09:30 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list_fr;

	if ((list_fr = malloc(sizeof(t_list))) == 0)
		return (0);
	if (content == NULL)
	{
		list_fr->content = NULL;
		list_fr->content_size = 0;
		list_fr->next = NULL;
		return (list_fr);
	}
	if ((list_fr->content = malloc(content_size)) == 0)
		return (0);
	ft_memcpy(list_fr->content, (void *)content, content_size);
	list_fr->content_size = content_size;
	list_fr->next = NULL;
	return (list_fr);
}
