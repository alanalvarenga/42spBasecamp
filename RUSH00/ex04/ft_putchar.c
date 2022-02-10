/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 13:41:45 by gmoreira          #+#    #+#             */
/*   Updated: 2022/02/05 17:48:14 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n);

void	print_col(char a, char b, char l, int x);

void	print_row(char l, int x, int y);

void	ft_putchar(char n)
{
	write (1, &n, 1);
}

void	print_col(char a, char b, char l, int x)
{
	int		counter;

	counter = 0;
	ft_putchar(a);
	while (counter < x -2)
	{
		ft_putchar(l);
		counter++;
	}
	if (x > 1)
	{
		ft_putchar(b);
	}
	write (1, "\n", 1);
}

void	print_row(char l, int x, int y)
{
	int		counter_y;
	int		counter_x;

	counter_y = 0;
	counter_x = 0;
	while (counter_y < y -2)
	{
		ft_putchar(l);
		while (counter_x < x -2)
		{
			write (1, " ", 1);
			counter_x++;
		}
		if (x > 1)
		{
			ft_putchar(l);
		}
		write (1, "\n", 1);
		counter_y++;
		counter_x = 0;
	}
}
