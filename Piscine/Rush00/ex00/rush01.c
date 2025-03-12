/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atseruny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:01:42 by atseruny          #+#    #+#             */
/*   Updated: 2024/09/08 18:09:47 by atseruny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	rush(int y, int x)
{
	int	i;
	int	j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			if (i == 0 && j == 0)
				ft_putchar('/');
			else if (i == x - 1 && j == y - 1 && y != 1 && x != 1)
				ft_putchar('/');
			else if ((i == 0 && j == y - 1) || (i == x - 1 && j == 0))
				ft_putchar('\\');
			else if (j == 0 || i == 0 || i == x - 1 || j == y - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
