/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:49:47 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/25 21:52:05 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 24;
	b = 42;
	printf("a : %d ; b : %d\n", a, b);
	ft_swap(&a, &b);
	printf("a : %d ; b : %d\n", a, b);
}
*/
