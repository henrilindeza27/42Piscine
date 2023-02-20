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

int	ft_atoi(char *str)
{
	int	i;
	int	multi;
	int	num;

	num = 0;
	multi = 1;
	if (ft_space_sign(str, &i) % 2 == 1)
	{
		multi = -1;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	num *= multi;
	return (num);
}
