/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:06:34 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/16 18:54:03 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

/*
int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 2;
	ft_ultimate_div_mod(&x, &y);
	printf("%d\n", x);
	printf("%d", y);
	return (0);
}
*/
