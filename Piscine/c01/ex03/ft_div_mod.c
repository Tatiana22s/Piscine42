/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:18:35 by tatperei          #+#    #+#             */
/*   Updated: 2023/09/03 12:16:52 by tatperei         ###   ########.fr       */
/*                                                                           */
/* ************************************************************************** */
/*#include <stdio.h>
#include <unistd.h> */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 19;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d,", div, mod);
	return (0);
}
*/
