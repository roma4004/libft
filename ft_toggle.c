/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toggle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromanic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 19:45:16 by dromanic          #+#    #+#             */
/*   Updated: 2019/03/18 19:46:02 by dromanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toggle(int *param)
{
	*param = *param == 0 ? 1 : 0;
	return (1);
}