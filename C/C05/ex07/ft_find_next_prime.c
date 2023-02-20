/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 22:18:09 by hlindeza          #+#    #+#             */
/*   Updated: 2023/02/07 07:17:51 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	finder(long int lnb)
{
	long int	div;

	div = 2;
	while (div * div <= lnb)
	{
		if (lnb % div == 0)
			return (1);
		div++;
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	long int	lnb;
	int			checker;

	lnb = nb;
	if (lnb <= 2)
		return (2);
	checker = 1;
	while (checker)
	{
		checker = finder(lnb);
		if (checker == 0)
			return (lnb);
		lnb++;
	}
	return (0);
}