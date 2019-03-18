/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_q_rsqrt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromanic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/01 17:29:55 by dromanic          #+#    #+#             */
/*   Updated: 2019/01/01 17:58:34 by dromanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The following code is the fast inverse square root implementation
** from Quake III Arena, stripped of C preprocessor directives,
** but including the exact original comment text
*/

float	ft_q_rsqrt(float number)
{
	long		i;
	float		x2;
	float		y;
	const float	threehalfs = 1.5F;

	x2 = number * 0.5F;
	y = number;
	i = *(long *)&y;
	i = 0x5f3759df - (i >> 1);
	y = *(float *)&i;
	y = y * (threehalfs - (x2 * y * y));
	return (y);
}
