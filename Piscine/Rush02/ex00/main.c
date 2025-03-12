/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atseruny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:24:38 by atseruny          #+#    #+#             */
/*   Updated: 2024/09/22 22:33:45 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "ffunc.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_isvalid(char *str)
{
	int	i;
	int len;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9') || str[0] == '0')
			return ("Error\n");
		i++;
	}
	len = ft_strlen(str);
	return(str);
}

void ft_print(char *st)
{
	int i;

	i = 0;
	while(st[i] != '\0')
	{
		write(1, &st[i], 1);
		i++;
	}
}
/*
void logic(char *str)
{
	int	cnt;
   
	cnt = ft_strlen(str);
	if (cnt / 3 == 0)
	{
		read(
	}
}
*/
char **ft_file()
{
	char ch[1];
	int cnt = 1, fd = open("numbers.dict", O_RDONLY);
	char **str=(char**)malloc(42*sizeof(char*));
	int i = 0, j = 0;

	if (fd == -1 )
	{
        ft_print("Dict Error\n");
        return(0);
    }
	while (read(fd, ch, 1) != 0)
	{
		cnt = 0;
		while (ch[0] != '\n')
		{
			cnt++;
			read(fd, ch, 1);
		}
		*str[i]=(char*)malloc(cnt*sizeof(char));
		i++;
		read(fd, ch, 1);

	}
	close(fd);
	i = 0;

	fd = open("numbers.dict", O_RDONLY);
	while (read(fd, ch, 1) != 0)
	{
		while (ch[0] != '\n')
		{
			str[i][j] = ch[0];
			j++;
			read(fd, ch, 1);
		}
		i++;
		j = 0;
		read(fd, ch, 1);
	}
	close(fd);
	free(str);
	return(str);	
}

int main(int argc, char **argv)
{
	char *res;
	char **dict;
	if (argc == 2)	
	{
		res = ft_isvalid(argv[1]);
		ft_print(res);
		dict = ft_file();
	}
	else ft_print("Error\n");
	return(0);
}
