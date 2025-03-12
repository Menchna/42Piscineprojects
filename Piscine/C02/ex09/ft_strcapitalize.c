/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:29:52 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/24 15:56:00 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		if (str[i] >= 97 && str[i] <= 122)
			if (!(str[i - 1] >= 97 && str[i - 1] <= 122))
				if (!(str[i - 1] >= 48 && str[i - 1] <= 57))
					if (!(str[i - 1] >= 65 && str[i - 1] <= 90))
						str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "salut, comment tu vas ?
   	42mots quarante-deux; cinquante+et+un";
	printf ("%s\n", ft_strcapitalize(str));
}
*/
