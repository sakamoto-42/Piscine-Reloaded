/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:59:45 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/28 18:30:44 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

/*
int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}
*/

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

/*
int	main(void)
{
	char	**tab;

	tab = (char **) malloc(4 * sizeof(char *));
	if (!tab)
		return (1);
	tab[0] = (char *) malloc(7 * sizeof(char));
	if (!tab[0])
		return (1);
	strcpy(tab[0], "Coucou");
	tab[1] = (char *) malloc(7 * sizeof(char));
	if (!tab[1])
		return (1);
	strcpy(tab[1], "012345");
	tab[2] = (char *) malloc(7 * sizeof(char));
	if (!tab[2])
		return (1);
	strcpy(tab[2], "a1b2c3");
	tab[3] = (char *) malloc(2 * sizeof(char));
	if (!tab[3])
		return (1);
	tab[3] = 0;
	printf("%d alpha str\n", ft_count_if(tab, &ft_str_is_alpha));
	free(tab[0]);
	free(tab[1]);
	free(tab[2]);
	free(tab[3]);
	free(tab);
}
*/
