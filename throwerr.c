/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   throwerr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <eligoodale1@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 19:48:33 by egoodale          #+#    #+#             */
/*   Updated: 2018/03/07 19:49:34 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	throw_err(int code)
{
	ft_putstr("error\n");
	exit(code);
}