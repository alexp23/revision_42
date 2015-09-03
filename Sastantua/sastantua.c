/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/10 03:43:53 by apietrul          #+#    #+#             */
/*   Updated: 2015/08/28 22:25:19 by apietrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		nb = nb * 10 + str[i] - 48;	
		i++;
	}
	return (nb);
}
void	ft_porte(int count_char, int nb_char, int count_line, int nb_line)
{
	if ((count_char == nb_char / 2) && (count_line == nb_line)) 
		ft_putchar('|');
	else
		ft_putchar('*');
}

void	void_char(int nb_pallier, int pallier, int moin_nb)
{
	int i;
	int count_line;
	int count_p;
	int size_char;
	int total_size;

	total_size = 0;
	i = 0;
	count_line = 1;
	count_p = 3;
	size_char = 0;
	i = 0;
	while (i < nb_pallier)
	{
		size_char = size_char + 5 + i;
		i++;
	}
	i = 0;
	size_char -= 2;
	while (i <= size_char - moin_nb)
	{	
		ft_putchar(' ');
		i++;
	}		
}	

void	palliers(int num_pal)
{
	int count_line;
	int count_char;
	int nb_line;
	int nb_char;
	int temp_rec;
	int temp_rec2;
	int moin_nb;
	
	temp_rec 	= num_pal;
	temp_rec2	= num_pal;
	num_pal		= 1;
	nb_char 	= num_pal + 2;
	moin_nb		= 0;
	while (num_pal <= temp_rec)
	{
		count_line 		= 1;
		count_char 		= 1;
		nb_line 		= num_pal + 2;

		while (count_line <= nb_line)
		{
			void_char(temp_rec, num_pal, moin_nb);
			while(count_char <= nb_char)
			{
				if (count_char == 1)
					ft_putchar('/');
				else if (count_char == nb_char)
					ft_putchar('\\');
				else if (num_pal < temp_rec)
					ft_putchar('*');
				else if (num_pal == temp_rec)
				{
					ft_porte(count_char, nb_char, count_line, nb_line);
				}
				count_char++;
			}
			moin_nb++;
			count_line++;
			count_char = 1;
			nb_char += 2;
			ft_putchar('\n');
		}
	temp_rec2--;
	nb_char += 4;
	num_pal++;
	moin_nb += 2;
	}
}


int		main(int argc, char **argv)
{
	int nb;

	if (argc != 2)
		return (0);
	nb = ft_atoi(argv[1]);
	palliers(nb);
	return (0);
}
