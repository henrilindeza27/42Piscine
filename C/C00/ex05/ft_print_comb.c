/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:28:39 by hlindeza          #+#    #+#             */
/*   Updated: 2023/01/27 23:12:53 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_show_result(char digit1, char digit2, char digit3)
{
	ft_putchar(digit1);
	ft_putchar(digit2);
	ft_putchar(digit3);
	if ((digit1 == '7' && digit2 == '8' && digit3 == '9') != 1)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	digit1;
	char	digit2;
	char	digit3;

	digit1 = '0';
	while (digit1 <= '7')
	{
		digit2 = digit1 + 1;
		while (digit2 <= '8')
		{
			digit3 = digit2 + 1;
			while (digit3 <= '9')
			{
				ft_show_result(digit1, digit2, digit3);
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
}
