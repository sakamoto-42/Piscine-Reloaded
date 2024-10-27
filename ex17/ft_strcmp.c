/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:01:03 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/27 10:16:18 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if ((unsigned char)*s1 > (unsigned char)*s2)
			return (1);
		if ((unsigned char)*s1 < (unsigned char)*s2)
			return (-1);
		s1++;
		s2++;
	}
	return (0);
}

/*
int	main(void)
{
	printf("ABC ABC\n");
	printf("expected : %d ; got : %d\n", strcmp("ABC", "ABC"), ft_strcmp("ABC", "ABC"));
	printf("ABC AB\n");
	printf("expected : %d ; got : %d\n", strcmp("ABC", "AB"), ft_strcmp("ABC", "AB"));
	printf("ABA ABZ\n");
	printf("expected : %d ; got : %d\n", strcmp("ABA", "ABZ"), ft_strcmp("ABA", "ABZ"));
	printf("ABJ ABC\n");
	printf("expected : %d ; got : %d\n", strcmp("ABJ", "ABC"), ft_strcmp("ABJ", "ABC"));
	printf("\201 A\n");
	printf("expected : %d ; got : %d\n", strcmp("\201", "A"), ft_strcmp("\201", "A"));
}
*/
