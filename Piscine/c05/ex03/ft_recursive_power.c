/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:12:03 by tatperei          #+#    #+#             */
/*   Updated: 2023/09/13 11:43:23 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power != 1)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
}*/
