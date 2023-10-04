/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:51:57 by tatperei          #+#    #+#             */
/*   Updated: 2023/09/09 18:39:42 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		(dest[j + i] = src[i]);
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	destino[] = "ola";
	char	fonte[] = " 42";

	printf("Fonte: %s\n", fonte); 
	printf("Destino: %s\n", destino);
	printf("Fonte+Destino: %s\n", ft_strcat(destino, fonte));
	return (0);
}*/
