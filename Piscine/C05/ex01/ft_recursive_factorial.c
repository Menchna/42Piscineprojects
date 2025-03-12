/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:57:43 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/25 21:00:03 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	if (nb > 0)
	{
		res *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (res);
}

/*
#include <stdio.h>
int	main(void)
{
	printf ("%i\n", ft_recursive_factorial(3));
}
*/
