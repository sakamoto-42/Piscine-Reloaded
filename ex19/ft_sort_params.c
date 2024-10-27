/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:23:42 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/27 11:00:31 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_swap_str(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	ft_must_swap_str(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 > *s2);
		s1++;
		s2++;
	}
	return (*s1 > *s2);
}

void	ft_sort_params(int size, char **tabstr)
{
	int	i;
	int	j;

	i = 1;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_must_swap_str(tabstr[i], tabstr[j]))
				ft_swap_str(&tabstr[i], &tabstr[j]);
			j++;
		}
		i++;
	}
}

void	ft_print_params(int size, char **tabstr)
{
	int	i;

	i = 1;
	while (i < size)
	{
		while (*tabstr[i])
		{
			ft_putchar(*tabstr[i]);
			tabstr[i]++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	ft_print_params(argc, argv);
}
