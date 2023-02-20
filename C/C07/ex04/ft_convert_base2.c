/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:20:48 by hlindeza          #+#    #+#             */
/*   Updated: 2023/02/13 20:42:35 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	num_size(char *base, int num)
{
	int				i;
	int				base_len;
	unsigned int	numm;

	i = 0;
	base_len = ft_strlen(base);
	if (num < 0)
	{
		numm = num * -1;
		i++;
	}
	else
		numm = num;
	while (numm >= (unsigned)base_len)
	{
		numm /= base_len;
		i++;
	}
	i++;
	return (i);
}

void	ft_putnbrpro(int num, char *base, char *numfinal)
{
	long	num2;
	int		i;
	int		sbase;
	int		snum;

	sbase = ft_strlen(base);
	snum = num_size(base, num);
	i = 0;
	num2 = num;
	if (num2 < 0)
	{
		numfinal[0] = '-';
		num2 *= -1;
		i = 1;
	}
	snum--;
	while (num2 >= sbase)
	{
		numfinal[snum] = base[num2 % sbase];
		num2 /= sbase;
		snum--;
	}
	if (num2 < sbase)
		numfinal[i] = base[num2];
}
