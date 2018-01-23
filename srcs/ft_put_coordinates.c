/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_coordinates.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 09:53:19 by ttran             #+#    #+#             */
/*   Updated: 2018/01/23 09:53:20 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	ft_put_coordinates(t_fill *ted)
{
	ft_putnbr(ted->X);
	write(1, " ", 1);
	ft_putnbr(ted->Y);
	write(1, "\n", 1);
}