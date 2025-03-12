/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:46:40 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/25 20:59:48 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (res);
}

/*
#include <stdio.h>
int	main(void)
{
	printf ("%i\n", ft_iterative_factorial(3));
}
*/
