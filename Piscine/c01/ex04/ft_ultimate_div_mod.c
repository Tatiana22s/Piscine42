/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 09:30:28 by tatperei          #+#    #+#             */
/*   Updated: 2023/09/01 10:17:32 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	z;

	z = *a;
	*a = *a / *b;
	*b = z % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 25;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);
	return (0);
}
*/
