/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:13:20 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/24 16:04:15 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "ashtotakovy";
	char	s2[] = "ashtotakovy";
	printf ("%d\n", ft_strcmp(s1, s2));
}
*/
