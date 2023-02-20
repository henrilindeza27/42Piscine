/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:50:57 by hlindeza          #+#    #+#             */
/*   Updated: 2023/01/31 19:03:36 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define HEX "0123456789abcdef"

void	ft_putchar(char caracter)
{
	write(1, &caracter, 1);
}

void	ft_hexa_char(unsigned char uc)
{
	ft_putchar(HEX[uc / 16]);
	ft_putchar(HEX[uc % 16]);
}

void	ft_addr_writer(unsigned long addr, int size)
{
	if (addr < 16)
	{
		while (--size > 0)
			ft_putchar('0');
		ft_putchar(HEX[addr]);
		return ;
	}
	ft_addr_writer(addr / 16, size - 1);
	ft_putchar(HEX[addr % 16]);
}

void	ft_string_print(char *str, int size)
{
	int	tmp;

	tmp = size - 1;
	while (++tmp < 16)
	{
		if (tmp % 2 == 0)
			ft_putchar(' ');
		write(1, "  ", 2);
	}
	while (size--)
	{
		if ((unsigned char)*str < 32 || (unsigned char)*str >= 127)
			ft_putchar('.');
		else
			ft_putchar(*str);
		str++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	index;

	ft_addr_writer((unsigned long)addr, 16);
	ft_putchar(':');
	index = -1;
	while (++index < 16 && size)
	{
		if (index % 2 == 0)
			ft_putchar(' ');
		ft_hexa_char((unsigned char)(((char *)addr)[index]));
		size--;
	}
	ft_putchar(' ');
	ft_string_print((char *)addr, index);
	if (size > 0)
	{
		ft_putchar('\n');
		ft_print_memory(addr + 16, size);
	}
	else
		ft_putchar('\n');
	return (addr);
}
