/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:39:39 by tatperei          #+#    #+#             */
/*   Updated: 2023/09/09 19:22:40 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dsize;
	unsigned int	ssize;

	dsize = ft_strlen(dest);
	ssize = ft_strlen(src);
	i = dsize;
	j = 0;
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[i] = '\0';
	if (size < dsize)
	{
		return (size + ssize);
	}
	return (dsize + ssize);
}
/*
int	main(void)
{
	char	destino[] = "ola";
	char	fonte[] = "4222";

	printf("Fonte: %s\n", fonte); 
	printf("Destino: %s\n", destino);
	printf("%d\n", ft_strlcat(destino, fonte, 2));
}*/
