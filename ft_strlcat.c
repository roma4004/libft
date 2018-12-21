/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromanic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 21:15:25 by dromanic          #+#    #+#             */
/*   Updated: 2018/11/10 19:33:52 by dromanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (dst[i] && i < size)
		i++;
	dst_len = i--;
	while (src[++i - dst_len] && i < size - 1)
		dst[i] = src[i - dst_len];
	if (dst_len < size)
		dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}
