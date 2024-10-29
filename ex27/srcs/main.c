/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 06:58:37 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/29 07:17:08 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int argc, char **argv)
{
	if (argc - 1 == 0)
	{
		ft_putstr_error("File name missing.\n");
		return (1);
	}
	if (argc - 1 > 1)
	{
		ft_putstr_error("Too many arguments.\n");
		return (1);
	}
	if (argc - 1 == 1)
	{
		ft_display_file(argv[1]);
		return (0);
	}
}
