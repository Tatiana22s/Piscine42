/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:17:21 by tatperei          #+#    #+#             */
/*   Updated: 2023/08/27 19:22:58 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	display(int x, int y, int xwidth, int yheight)
{
	if ((y == 1) || (y == yheight)) 
	{
		if (x == 1)
			ft_putchar('A');
		else if (x == xwidth)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else 
	{
		if ((x == 1) || (x == xwidth))
			ft_putchar('B');
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
			display(x, y, xwidth, yheight);
			x++;
		}
		y++;
		ft_putchar('\n');
	}
}
