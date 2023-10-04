/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:15:25 by tatperei          #+#    #+#             */
/*   Updated: 2023/09/13 08:09:29 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_recursive_factorial(atoi(argv[1])));
}*/
