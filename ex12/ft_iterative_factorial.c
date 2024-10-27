/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:32:43 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/27 09:44:27 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	fact = 1;
	while (nb > 0)
		fact *= nb--;
	return (fact);
}

/*
int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d! = %d\n", nb, ft_iterative_factorial(nb));
}
*/
