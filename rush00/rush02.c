/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:17:35 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/10 15:30:23 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter);

void	choose_char(int x, int y, int l, int c)
{
	if ((l == 0 && c == 0) || (l == 0 && c == x - 1))
	{
		ft_putchar('A');
	}
	else if ((l == y - 1 && c == 0) || (l == y - 1 && c == x - 1))
	{
		ft_putchar('C');
	}
	else if (l == 0 || l == y - 1 || c == 0 || c == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 0;
	while (l < y)
	{
		c = 0;
		while (c < x)
		{
			choose_char(x, y, l, c);
			c++;
		}
		write(1, "\n", 1);
		l++;
	}
}
