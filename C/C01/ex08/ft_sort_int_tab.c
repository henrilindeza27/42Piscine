/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 07:52:56 by hlindeza          #+#    #+#             */
/*   Updated: 2023/01/28 10:11:33 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;

	i = 1;
	while (i < size)
	{
		min = tab[i];
		j = i - 1;
		while (j >= 0 && tab[j] > min)
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = min;
		i++;
	}
}
