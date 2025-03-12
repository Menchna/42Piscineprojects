/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:38:56 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/25 14:07:34 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[] = "zzzzz";
	char	s2[] = "malmo";
	printf ("%d\n", ft_strncmp(s1, s2, 5));
	printf ("%d\n", strncmp(s1, s2, 5));
}
*/
