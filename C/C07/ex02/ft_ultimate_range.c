/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 01:13:24 by hlindeza          #+#    #+#             */
/*   Updated: 2023/02/08 01:13:28 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*arr;

	i = 0;
	size = max - min;
	arr = malloc(sizeof(int) * size);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (arr == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (size);
}
