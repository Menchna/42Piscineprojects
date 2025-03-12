/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:15:12 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/21 19:00:34 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
	{
		return (1);
	}
	while (str [i] != '\0')
	{
		if (str [i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>
int	main()
{
	printf ("%d\n", ft_str_is_numeric("1346"));
}
*/
