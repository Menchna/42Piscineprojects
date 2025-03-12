/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:50:46 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/16 19:10:46 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab [i];
		tab [i] = tab [size - i - 1];
		tab [size - i -1] = swap;
		i++;
	}
}

/*
int	main(void)
{
	
	int tab [6] = {0, 1, 2, 3, 4, 5};
	int size = 6;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], 
	tab[3], tab[4], tab[5]);
	return (0);
}
*/
