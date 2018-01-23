/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 23:53:49 by ttran             #+#    #+#             */
/*   Updated: 2018/01/22 23:53:50 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			main(int argc, char **argv)
{
	t_fill	*ted;
	int		fd;

	argc = 0;
	ted = malloc(sizeof(t_fill));
	player_and_size(fd = open(argv[1], O_RDONLY), ted);
	board(fd, ted);
	ez_win(ted);
	close(fd);
	return (0);
}
