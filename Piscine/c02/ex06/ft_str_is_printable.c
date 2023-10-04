/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:50:14 by tatperei          #+#    #+#             */
/*   Updated: 2023/09/09 11:56:31 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] != 127)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "42838";
	char	b[] = "\n";
	char	c[] = "";
	char	d[] = "hj/HKM";

	printf("%d\n", ft_str_is_printable(a));
	printf("%d\n", ft_str_is_printable(b));
	printf("%d\n", ft_str_is_printable(c));
	printf("%d\n", ft_str_is_printable(d));
}
*/
