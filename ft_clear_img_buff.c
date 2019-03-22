/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_img_buff.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromanic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 19:41:12 by dromanic          #+#    #+#             */
/*   Updated: 2019/03/18 19:45:14 by dromanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft.h"

void	ft_clear_img_buff(int *buffer, size_t width, size_t height)
{
	size_t y;
	size_t x;

	y = UINT64_MAX;
	while (++y < height)
	{
		x = UINT64_MAX;
		while (++x < width)
			buffer[y * width + x] = 0;
	}
}
