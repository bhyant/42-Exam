/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:54:01 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 13:03:23 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) // ft_putchar classique
{
	write(1, &c, 1);
}

void	ft_putnbr(int n) // putnbr simplifiee
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	ft_atoi(char *str) // atoi simplifiee
{
	int	i = 0;
	int	res = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int	is_prime(int nb) // fonction qui return 1 si nb est un nombres premiers
{
	int	i = 2;

	if (nb <= 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	nb = 0;
	int	sum = 0;

	if (ac == 2) // verification des arguments
	{
		nb = ft_atoi(av[1]); // atoi le av[1]
		while (nb) // tant que nb existe on verifie si il est premier
		{
			if (is_prime(nb)) // si il est un nombres premiers on l'ajoute a la somme
				sum += nb;
			nb--;
		}
		ft_putnbr(sum); // on affiche la somme des nombres premiers
	}
	else
		write(1, "0", 1); // sinon on affiche 0 puis \n
	write(1, "\n", 1);
}