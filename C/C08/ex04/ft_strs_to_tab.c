/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:26:22 by hlindeza          #+#    #+#             */
/*   Updated: 2023/02/13 14:26:24 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;

	i = 0;
	cpy = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (cpy == NULL)
		return (0);
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*matriz;

	i = 0;
	matriz = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (matriz == NULL)
		return (0);
	while (i < ac)
	{
		matriz[i].str = av[i];
		matriz[i].copy = ft_strdup(av[i]);
		matriz[i].size = ft_strlen(av[i]);
		i++;
	}
	matriz[i].str = 0;
	matriz[i].copy = 0;
	matriz[i].size = 0;
	return (matriz);
}
