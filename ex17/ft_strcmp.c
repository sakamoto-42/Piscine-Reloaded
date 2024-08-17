/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:46:12 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/08/15 13:55:30 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
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
