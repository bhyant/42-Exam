/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 19:42:39 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 19:52:59 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) // fonction qui write un char
{
	write(1, &c, 1);
}

void	ft_putnbr(int n) // fonction pour afficher un nombres
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	ft_atoi(char *str) // fonction qui convertis un char en int
{
	int	i = 0;
	int	res = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i--;
	}
	return (res);
}

void	ft_tab_mult(int nb) // fonction pour afficher la table de multiplication
{
	int	i = 1;

	while (i <= 9) // tant que i est inferieur ou egal a 9 on incremente
	{
		ft_putnbr(i);
		write(1, " * ", 3); // on affiche le calcul comme demander sur l'enonce
		ft_putnbr(nb);
		write(1, " = ", 3);
		ft_putnbr(nb * i);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_tab_mult(ft_atoi(av[1]));
	else
		write(1, "\n", 1);
}