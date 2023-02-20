int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int flag_sort;

	i = 0;
	flag_sort = 1;
	while (i < length - 1 && flag_sort)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			flag_sort = 0;
		i++;
	}
	if (flag_sort != 1)
	{
		i = 0;
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
		}
	}
	return (1);
}
