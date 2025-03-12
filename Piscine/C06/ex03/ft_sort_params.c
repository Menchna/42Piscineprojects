/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:59:32 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/26 17:22:30 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sorting(int argc, char **argv)
{
	int		i;
	int		j;
	int		max;
	char	*swap;

	i = 1;
	while (i < argc)
	{
		j = 1;
		max = 1;
		while (j < argc - i + 1)
		{
			if (argv[j][0] > argv[max][0])
				max = j;
			j++;
		}
		swap = argv[max];
		argv[max] = argv[argc - i];
		argv[argc - i] = swap;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	sorting(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write (1, &argv[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}
