/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:14 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/24 15:25:34 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 'a' && str [i] <= 'z')
		{
			str [i] -= 32;
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
	char	str[] = "nemra";
	printf ("%s\n", ft_strupcase(str));
}
*/
