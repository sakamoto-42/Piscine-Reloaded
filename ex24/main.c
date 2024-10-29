/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:56:24 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/27 19:06:46 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	printf("ft_putchar : a\n");
	ft_putchar('a');
	printf("\n");
	printf("ft_putstr : Hello, World !\n");
	ft_putstr("Hello, World !");
	printf("\n");
	printf("ft_strcmp : AAA ABC\n");
	printf("%d\n", ft_strcmp("AAA", "ABC"));
	printf("ft_strlen : Hello, World !\n");
	printf("%d\n", ft_strlen("Hello, World !"));
	a = 24;
	b = 42;
	printf("ft_swap : 24 42\n");
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
}
