/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrilindeza <henrilindeza@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 05:09:07 by hlindeza          #+#    #+#             */
/*   Updated: 2023/02/20 11:12:30 by henrilindez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_print_array(char arr[], int lenght, char last_value)
{
	int	i;

	i = 0;
	if (arr[0] == last_value)
	{
		while (i < lenght)
		{
			ft_putchar(arr[i++]);
		}
		return ;
	}
	else
	{
		while (i < lenght)
		{
			ft_putchar(arr[i++]);
		}
		write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int		flag;
	int		i;
	int		base;
	char	arr[10];
	char	arr_max[10];

	i = 0;
	while (i < n)
	{
		arr[i] = i + '0';
		arr_max[i] = (10 - n) + i + '0';
		++i;
	}
	ft_print_array(arr, n, arr_max[0]);
	while (arr[0] != arr_max[0])
	{
		flag = n - 1;
		while (arr[flag] == arr_max[flag])
			--flag;
		base = ++(arr[flag]);
		while (flag < (n - 1))
			arr[++flag] = ++base;
		ft_print_array(arr, n, arr_max[0]);
	}
}
