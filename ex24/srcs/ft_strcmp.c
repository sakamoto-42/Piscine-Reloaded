/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:04:47 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/27 18:08:10 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if ((unsigned char) *s1 < (unsigned char) *s2)
			return (-1);
		if ((unsigned char) *s1 > (unsigned char) *s2)
			return (1);
		s1++;
		s2++;
	}
	return (0);
}
