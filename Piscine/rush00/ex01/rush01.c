/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 08:44:39 by jesilva-          #+#    #+#             */
/*   Updated: 2023/08/27 17:39:14 by jobarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	display(int y, int yheight, int x, int xwidth)
{
	if ((y == 1) || (y == yheight))
	{
		if ((x == 1) && (y == 1))
			ft_putchar('/');
		else if ((x == xwidth) && (y == yheight))
			ft_putchar('/');
		else if ((x == 1) && (y == yheight))
			ft_putchar('\\');
		else if ((x == xwidth) && (y == 1))
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else
	{
		if ((x == 1) || (x == xwidth))
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush(int xwidth, int yheight)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y <= yheight)
	{
		x = 1;
		while (x <= xwidth)
		{
			display(y, yheight, x, xwidth);
			x++;
		}
		y++;
		ft_putchar('\n');
	}
}
