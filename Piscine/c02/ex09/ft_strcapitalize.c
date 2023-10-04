/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:09:40 by tatperei          #+#    #+#             */
/*   Updated: 2023/09/08 07:59:02 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			++i;
		}
		if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
		if ((str[i] >= 97 && str[i] <= 122) 
			&& (str[i - 1] == 32 || str[i - 1] == 43
				|| str[i - 1] == 45))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	a[] = "ola, tudo BEM? 42PalaVras quArenta-E-dUas; cinquenta+e+um";

	printf("%s\n", ft_strcapitalize(a));
}*/
