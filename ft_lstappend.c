/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromanic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 16:00:41 by dromanic          #+#    #+#             */
/*   Updated: 2018/11/11 18:38:53 by dromanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	**ft_lstappend(t_list **lst, void *data, size_t data_size)
{
	t_list *cur;

	if (!lst)
		return (NULL);
	if (!(*lst))
		*lst = ft_lstnew(data, data_size);
	else
	{
		cur = *lst;
		while (cur->next)
			cur = cur->next;
		cur->next = ft_lstnew(data, data_size);
	}
	return (lst);
}
