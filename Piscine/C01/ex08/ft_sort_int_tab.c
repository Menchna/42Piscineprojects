/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:48:34 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/16 19:13:22 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab [i] > tab [i + 1])
			{
				swap = tab [i];
				tab [i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}

/*
int main(void)
{
	int	tab[6] = {3, 5, 7, 8, 2, 1};
	int	size = 6;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2],
   	tab[3], tab[4], tab[5]);
	return (0);
}
*/
