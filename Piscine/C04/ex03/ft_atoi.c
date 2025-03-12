/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:09:14 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/25 17:37:06 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	buff;
	int	neg;
	int	i;

	i = 0;
	neg = 1;
	buff = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = neg * (-1);
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		buff *= 10;
		buff = buff + (str[i] - '0');
		i++;
	}
	return (buff * neg);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*s = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(s));
}
*/
