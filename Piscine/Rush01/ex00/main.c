/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:51:21 by armkhach          #+#    #+#             */
/*   Updated: 2024/09/15 23:28:18 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int main ( int argc , char *argv[])
{
	(void)argc;
	int i = 0;
	int j = 0;
	char numbers[16];
	int x = 0;
	int k = 0;

	while(k < 31)
	{
		if (argv[1][k] == '1' || argv[1][k] == '2' || argv[1][k] == '3' || argv[1][k] == '4' )
		{
			numbers[x] = argv[1][k];
			x++;
		}
	}
	
	
	while (i < 6)
	{
		while(j < 6)
		{
			write(1, "wewe", 4);
			if (( i == 0 && j == 0) || (i == 0 && j == 5))
			{
				write(1, " ", 1);
			}
			else if (( i == 5 && j == 0 ) || ( i == 5 && j == 5 ))
			{
				write(1, " " ,1);
			}

			// row_one_up
			else if ( i == 0 && j == 1 )
			{
				write(1, &numbers[0], 1);  
			}
			else if ( i == 0 && j == 2 )
			{
				write(1, &numbers[1], 1);  
			}
			else if ( i == 0 && j == 3 )
			{
				write(1, &numbers[2], 1);  
			}
			else if ( i == 0 && j == 4 )
			{
				write(1, &numbers[3], 1);  
			}

			// row_bottom
			else if ( i == 5 && j == 1 )
			{
			    write(1, &numbers[4], 1);
			}
			else if ( i == 5 && j == 2 )
			{
				write(1, &numbers[5], 1);  
			}
			else if ( i == 5 && j == 3 )
			{
				write(1, &numbers[6], 1);  
			}
			else if ( i == 5 && j == 4 )
			{
				write(1, &numbers[7], 1);  
			}

            // left colomn
			else if ( i == 1 && j == 0 )
			{
				write(1, &numbers[8], 1);  
			}
			else if ( i == 2 && j == 0 )
			{
				write(1, &numbers[9], 1);  
			}
			else if ( i == 3 && j == 0 )
			{
				write(1, &numbers[10], 1);  
			}
			else if ( i == 4 && j == 0 )
			{
				write(1, &numbers[11], 1);  
			}

			 // right colomn
			else if ( i == 1 && j == 5 )
			{
				write(1, &numbers[12], 1);  
			}
			else if ( i == 2 && j == 5 )
			{
				write(1, &numbers[13], 1);  
			}
			else if ( i == 3 && j == 5 )
			{
				write(1, &numbers[14], 1);  
			}
			else if ( i == 4 && j == 5 )
			{
				write(1, &numbers[15], 1);  
			}
			
			else 
			{
				write (1, " ", 1);
			}

			
			


			j++;	
		}
		write(1," ", 1);
		i++;
	}
	
	return 0;
}
