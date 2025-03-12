/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:42:04 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/24 15:26:00 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 'A' && str [i] <= 'Z')
		{
			str [i] += 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "NEMRA";
	printf ("%s\n", ft_strlowcase(str));
}
*/
