/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:45:32 by tatperei          #+#    #+#             */
/*   Updated: 2023/09/09 19:03:55 by tatperei         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		(dest[len + i] = src[i]);
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	destino[] = "ola";
	char	fonte[] = "4222";

	printf("Fonte: %s\n", fonte); 
	printf("Destino: %s\n", destino);
	printf("Fonte+Destino: %s\n", ft_strncat(destino, fonte, 2));
	return (0);
}*/
