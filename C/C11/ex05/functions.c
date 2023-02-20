#include "doop.h"

int	operator(int a, char *signal, int b)
{
	int	result;
	int	(*operator[5])(int, int);

	operator[0] = & ft_add;
	operator[1] = & ft_subtract;
	operator[2] = & ft_multiply;
	operator[3] = & ft_divide;
	operator[4] = & ft_module;
	result = 1;
	if (signal[0] == '+')
		result = operator[0](a, b);
	else if (signal[0] == '-')
		result = operator[1](a, b);
	else if (signal[0] == '*')
		result = operator[2](a, b);
	else if (signal[0] == '/')
		result = operator[3](a, b);
	else if (signal[0] == '%')
		result = operator[4](a, b);
	return (result);
}

void	do_op(char *n, char *signal, char *m)
{
	int	num1;
	int	num2;
	int	result;

	num1 = ft_atoi(n);
	num2 = ft_atoi(m);
	if (!(signal[0] == '+' || signal[0] == '-' || signal[0] == '/'
			|| signal[0] == '%' || signal[0] == '*'))
		write(1, "0", 1);
	else if (signal[0] == '/' && num2 == 0)
		write(1, "Stop : division by zero", 23);
	else if (signal[0] == '%' && num2 == 0)
		write(1, "Stop : modulo by zero", 21);
	else
	{
		result = (operator(num1, signal, num2));
		ft_putnbr(result);
	}
	write(1, "\n", 1);
}
