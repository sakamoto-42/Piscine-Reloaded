/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:49:22 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/08/15 13:00:06 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	fact = 1;
	while (nb > 0)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
