/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <eligoodale1@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 20:04:54 by egoodale          #+#    #+#             */
/*   Updated: 2018/03/07 20:30:31 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char *tetra_list;

	if (argc == 2)
	{
		tetra_list = get_input_f(argv[1]);
		pars_input(tetra_list);
	}
}
