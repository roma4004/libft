/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromanic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 21:28:02 by dromanic          #+#    #+#             */
/*   Updated: 2018/11/02 17:08:06 by dromanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ch_src;
	unsigned char	*ch_dst;

	ch_src = (unsigned char *)src;
	ch_dst = (unsigned char *)dst;
	i = -1;
	if (src < dst)
		while (len--)
			ch_dst[len] = ch_src[len];
	else
		while (++i < len)
			ch_dst[i] = ch_src[i];
	return (dst);
}
