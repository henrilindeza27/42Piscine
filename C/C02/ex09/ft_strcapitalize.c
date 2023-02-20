/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:36:15 by hlindeza          #+#    #+#             */
/*   Updated: 2023/01/31 18:50:28 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_low(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int	is_up(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

int	is_digit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_up(str[i]))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (is_low(str[i]))
			{
				str[i] = str[i] - 32;
			}
		}
		if (is_low(str[i - 1]) || is_up(str[i - 1]) || is_digit(str[i - 1]))
			;
		else if (is_low(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
