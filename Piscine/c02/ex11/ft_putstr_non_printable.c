/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 09:18:30 by tatperei          #+#    #+#             */
/*   Updated: 2023/09/10 15:43:07 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32) || str[i] == 127)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}
		else if (str[i] == 0 )
		{
			ft_putchar("0123456789abcdef"[str[0] / 16]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int	main(void)
{
	char	a[] = "Ola\0esta bem?";

	ft_putstr_non_printable(a);
	return (0);
}
