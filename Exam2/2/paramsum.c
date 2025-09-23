/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:29:01 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 21:45:16 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) // fonction pour ecrire un char
{
	write(1, &c, 1);
}

void	ft_putnbr(int n) // fonction pour ecrire un nombres en char
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	main(int ac, char **av)
{
	(void)av; // void le av car on ne l'utilise pas || obligatoire sinon sa ne compile pas avec les flag
	
	ft_putnbr(ac -1); // on ecris le nombres d'arg avec ac - 1 car l'executable ne compte pas
	write(1, "\n", 1);
}