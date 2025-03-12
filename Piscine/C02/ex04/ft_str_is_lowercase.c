/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:38:14 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/21 19:01:49 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
	{
		return (1);
	}
	while (str [i] != '\0')
	{
		if (str [i] >= 97 && str[i] <= 122)
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
    printf ("%d\n", ft_str_is_lowercase("nemra"));
}
*/
