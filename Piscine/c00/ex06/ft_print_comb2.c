/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:48:18 by tatperei          #+#    #+#             */
/*   Updated: 2023/08/29 13:08:16 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void);
void	ft_print_numb(char n);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99) 
		{
			ft_print_numb(a / 10);
			ft_print_numb(a % 10);
			write(1, " ", 1);
			ft_print_numb(b / 10);
			ft_print_numb(b % 10);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

void	ft_print_numb(char n)
{
	n += 48;
	write(1, &n, 1);
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
