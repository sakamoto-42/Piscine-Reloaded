/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:08:55 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/08/15 16:13:43 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = malloc(size * sizeof(int));
	if (!range)
		return (NULL);
	while (i < size)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
