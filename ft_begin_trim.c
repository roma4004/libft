/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_begin_trim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromanic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 20:49:38 by dromanic          #+#    #+#             */
/*   Updated: 2018/11/03 14:02:47 by dromanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

size_t	ft_begin_trim(const char *str)
{
	size_t	i;

	i = 0;
	if (str)
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
	return (i);
}