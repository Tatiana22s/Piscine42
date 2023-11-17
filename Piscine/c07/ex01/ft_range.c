/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:00:41 by tatperei          #+#    #+#             */
/*   Updated: 2023/09/14 18:19:24 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_vef(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	size;
	int	i;

	i = 0;
	if (max <= min)
		return (NULL);
	size = ft_vef(max - min);
	ptr = malloc(size * sizeof(int));
	if (!(ptr))
		return (NULL);
	while (min != max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
