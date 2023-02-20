/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 06:32:19 by hlindeza          #+#    #+#             */
/*   Updated: 2023/02/05 06:40:35 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	org;

	org = nb;
	if (power < 0)
	{
		return (0);
	}
	if ((nb == 0 && power == 0) || (power == 0))
	{
		return (1);
	}
	org *= ft_recursive_power(nb, power - 1);
	return (org);
}
