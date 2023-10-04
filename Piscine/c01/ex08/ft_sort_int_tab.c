/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 11:43:11 by tatperei          #+#    #+#             */
/*   Updated: 2023/09/03 14:40:53 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h> */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tr;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tr = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tr;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	v[5] = {1, 5, -6, 9, 7};
	int	i;

	i = 0;
	ft_sort_int_tab(v, 5);
	while (i < 5)
	{
		printf("%d ", v[i]);
		i++;
	}
	return (0);
}*/
