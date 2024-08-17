/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:10:19 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/08/15 15:38:18 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		while (*av[i])
		{
			ft_putchar(*av[i]);
			av[i]++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	ft_strcmp_str(char *s1, char *s2)
{
	unsigned char	c1;
	unsigned char	c2;

	while (*s1 || *s2)
	{
		c1 = (unsigned char) *s1;
		c2 = (unsigned char) *s2;
		if (c1 != c2)
			return (c1 - c2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_swap_str(char **s1, char **s2)
{
	char	*temp_str;

	temp_str = *s1;
	*s1 = *s2;
	*s2 = temp_str;
}

void	ft_sort_params(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp_str(av[i], av[j]) > 0)
				ft_swap_str(&av[i], &av[j]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	ft_print_params(argc, argv);
}
