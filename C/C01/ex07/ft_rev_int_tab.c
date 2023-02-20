/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 07:34:01 by hlindeza          #+#    #+#             */
/*   Updated: 2023/01/28 07:52:13 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	pos;
	int	i;

	i = 0;
	while (i < size)
	{
		pos = tab[(size - 1)];
		tab[(size - 1)] = tab[i];
		tab[i] = pos;
		size--;
		i++;
	}
}
