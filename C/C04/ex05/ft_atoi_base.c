/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 09:22:47 by hlindeza          #+#    #+#             */
/*   Updated: 2023/02/08 13:59:35 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == ' ' || base[i] == '+' || base[i] == '-' || base[i] >= 9
			&& base[i] <= 13)
			return (0);
		j = i;
		while (base[j] != '\0')
		{
			if (base[i] == base[j + 1])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_space_sign(char *str, int *index)
{
	int	i;
	int	signal;

	signal = 0;
	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == '\v'))
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			signal++;
		}
		i++;
	}
	*index = i;
	return (signal);
}

int	nb_in_base(char ch, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == ch)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	multi;
	int	size;
	int	num;
	int	num2;

	num = 0;
	i = 0;
	multi = 1;
	size = ft_checkbase(base);
	if (ft_space_sign(str, &i) % 2 == 1)
		multi = -1;
	if (size >= 2)
	{
		num2 = nb_in_base(str[i], base);
		while (num2 != -1)
		{
			num = (num * size) + num2;
			i++;
			num2 = nb_in_base(str[i], base);
		}
		num *= multi;
		return (num);
	}
	return (0);
}
