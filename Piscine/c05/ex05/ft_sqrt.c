/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:14:11 by tatperei          #+#    #+#             */
/*   Updated: 2023/09/13 21:48:59 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1; 
	if (nb < 0)
	{
		return (0);
	}
	while ((i <= nb) && i < 46341)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_sqrt(atoi(argv[1])));
}*/
