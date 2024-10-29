/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:54:16 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/27 17:31:41 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = (int *) malloc((max - min) * sizeof(*range));
	i = 0;
	while (i < max)
	{
		range[i] = min++;
		i++;
	}
	return (range);
}

/*
void	ft_print_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	min;
	int	max;
	int	size;
	int	*range;

	min = 2;
	max = 9;
	range = ft_range(min, max);
	size = max - min;
	printf("min : %d ; max : %d\n", min, max);
	ft_print_int_tab(range, size);
}
*/
