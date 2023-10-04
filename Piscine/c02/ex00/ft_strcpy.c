/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:47:03 by tatperei          #+#    #+#             */
/*   Updated: 2023/09/08 08:03:48 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	destino[] = "bom dia";
	char	fonte[] = "Olaaaaa";

	printf("F: %s\n", fonte);
	printf("D: %s\n", destino);
	printf("Copia: %s\n", ft_strcpy(destino, fonte));
	return (0);
}*/
