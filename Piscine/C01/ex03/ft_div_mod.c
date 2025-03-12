/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:01:19 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/16 18:51:13 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main()
{
    int a;
    int b;
    int x;
    int y;

    a = 5;
    b = 2;
    ft_div_mod(a, b, &x, &y);
    printf("%d\n", x);
    printf("%d", y);
    return(0);
}
*/
