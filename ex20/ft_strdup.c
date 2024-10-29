/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:09:26 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/27 11:22:40 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dup;

	src_len = ft_strlen(src);
	dup = (char *) malloc((src_len + 1) * sizeof(*src));
	dup = ft_strcpy(dup, src);
	return (dup);
}

/*
int	main(void)
{
	char	*src;

	src = "Hello, World !";
	printf("src : %s\n", src);
	printf("expected : %s\n", strdup(src));
	printf("got : %s\n", ft_strdup(src));
}
*/
