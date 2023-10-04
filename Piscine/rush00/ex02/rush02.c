/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:27:32 by jesilva-          #+#    #+#             */
/*   Updated: 2023/08/27 19:27:45 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	display(int y, int yheight, int x, int xwidth)
{
	if (y == 1)
	{
		if ((x == 1) || (x == xwidth))
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (y == yheight)
	{
		if ((x == 1) || (x == xwidth))
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
			display(y, yheight, x, xwidth);
			x++;
		}
		y++;
		ft_putchar('\n');
	}
}
