/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:28:30 by tatperei          #+#    #+#             */
/*   Updated: 2023/09/13 12:18:26 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 2)
	{
		return (2);
	}
	while (i <= (nb / i))
	{
		if (nb % i == 0)
		{
			nb += 1;
			i = 1;
		}
		i += 1;
	}
	return (nb);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_find_next_prime(atoi(argv[1])));
}*/
