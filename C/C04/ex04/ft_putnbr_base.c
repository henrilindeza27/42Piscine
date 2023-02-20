/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:15:49 by hlindeza          #+#    #+#             */
/*   Updated: 2023/02/08 12:29:51 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	ft_check_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || ft_strlen(base) == 1)
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j + 1])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbrp;

	nbrp = nbr;
	if (ft_check_error(base) == 0)
	{
		if (nbrp < 0)
		{
			ft_putchar('-');
			nbrp *= -1;
		}
		if (nbrp < ft_strlen(base))
		{
			ft_putchar(base[nbrp]);
		}
		if (nbrp >= ft_strlen(base))
		{
			ft_putnbr_base(nbrp / (ft_strlen(base)), base);
			ft_putnbr_base(nbrp % (ft_strlen(base)), base);
		}
	}
}
