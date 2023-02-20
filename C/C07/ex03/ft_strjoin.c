/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 01:13:32 by hlindeza          #+#    #+#             */
/*   Updated: 2023/02/08 06:47:32 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}

int	total_size(char **strs, int size_sep, int size)
{
	int	i;
	int	tt_size;

	i = 0;
	tt_size = size_sep * -1;
	while (i < size)
	{
		tt_size += size_sep + ft_strlen(strs[i]);
		i++;
	}
	return (tt_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		tt_size;
	int		i;

	i = 0;
	if (size == 0)
	{
		str = (char *)malloc(1);
		return (str);
	}
	tt_size = total_size(strs, ft_strlen(sep), size);
	str = malloc(sizeof(char) * (tt_size + 1));
	if (str == NULL)
		return (0);
	while (i < size)
	{
		str = ft_strcpy(str, strs[i]);
		if (i + 1 < size)
		{
			str = ft_strcpy(str, sep);
		}
		i++;
	}
	*str = '\0';
	return (str - tt_size);
}
