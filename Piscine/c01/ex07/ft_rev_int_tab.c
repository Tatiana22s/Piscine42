/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 09:22:59 by tatperei          #+#    #+#             */
/*   Updated: 2023/09/03 11:33:25 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h> */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tr;
	int	i;

	i = 0;
	while (i < size)
	{
		tr = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = tr;
		i++;
		size--;
	}
}
/*
int	main(void)
{
	int	v[5] = {1, 2, 3, 4, 5};
	int	i;

	i = 0;
	ft_rev_int_tab(v, 5);
	while (i < 5)
	{
		printf("%d - ", v[i]);
		i++;
	}
	return (0);
}
*/
