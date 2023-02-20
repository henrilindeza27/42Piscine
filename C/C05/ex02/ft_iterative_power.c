/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 06:22:34 by hlindeza          #+#    #+#             */
/*   Updated: 2023/02/05 06:39:43 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	org;

	i = 0;
	org = nb;
	if (power < 0)
	{
		return (0);
	}
	if ((nb == 0 && power == 0) || (power == 0))
	{
		return (1);
	}
	while (i < power - 1)
	{
		org *= nb;
		i++;
	}
	return (org);
}
