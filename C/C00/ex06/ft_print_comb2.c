/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 03:16:02 by hlindeza          #+#    #+#             */
/*   Updated: 2023/01/27 23:11:39 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_display(int value)
{
	int	digit1;
	int	digit2;

	if (value <= 9)
	{
		ft_putchar('0');
		ft_putchar(value + '0');
	}
	else
	{
		digit1 = value / 10;
		digit2 = value % 10;
		ft_putchar(digit1 + '0');
		ft_putchar(digit2 + '0');
	}
}

void	ft_show_result(int numb1, int numb2)
{
	ft_display(numb1);
	ft_putchar(' ');
	ft_display(numb2);
	if (numb1 < 98 || numb2 < 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	numb1;
	int	numb2;

	numb1 = 0;
	while (numb1 < 99)
	{
		numb2 = numb1 + 1;
		while (numb2 <= 99)
		{
			ft_show_result(numb1, numb2);
			numb2++;
		}
		numb1++;
	}
}
