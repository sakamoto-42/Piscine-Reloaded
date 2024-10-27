/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:52:18 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/27 09:56:40 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

/*
int	main(void)
{
	ft_putstr("Hello, World !");
}
*/
