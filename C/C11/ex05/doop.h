#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		ft_atoi(char *str);
int		ft_space_sign(char *str, int *index);

int		ft_add(int x, int y);
int		ft_subtract(int x, int y);
int		ft_multiply(int x, int y);
int		ft_divide(int x, int y);
int		ft_module(int x, int y);

int		operator(int a, char *signal, int b);
void	do_op(char *n, char *signal, char *m);

#endif