/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromanic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:34:40 by dromanic          #+#    #+#             */
/*   Updated: 2019/04/17 17:42:24 by dromanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ishex(char ch)
{
	if (ft_isdigit(ch)
	|| (ch >= 'A' && ch <= 'F')
	|| (ch >= 'a' && ch <= 'f'))
		return (1);
	return (0);
}