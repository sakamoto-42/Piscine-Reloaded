/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:17:46 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/27 19:28:59 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putnbr(int nb)
{
	long long int	n;

	n = (long long int) nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr((int) n / 10);
	ft_putchar((char) (n % 10 + '0'));
}

int	main(void)
{
	int	tab[5];
	int	i;
	int	length;

	i = 0;
	length = 5;
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, length, &ft_putnbr);
}
*/
