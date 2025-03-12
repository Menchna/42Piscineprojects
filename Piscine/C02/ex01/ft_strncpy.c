/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:23:21 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/19 19:58:08 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	src[] = "world";
	char	dest[] = "Hello malmo";
	unsigned int	n = 3;

	//printf("dest: %s\n", ft_strncpy(dest, src, 7));
	printf("dest: %s\n", ft_strncpy(dest, src, n));
	return(0);
} 
*/
