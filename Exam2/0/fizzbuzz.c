/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 00:23:56 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/22 00:25:45 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) 
{
	write(1, &c, 1);
}

void	ft_putnbr(int n) // ft_putnbr simplifie
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	main(void)
{
	int n;

	n = 1;
	while (n <= 100) // pour ecrire les 100 lignes
	{
		if (n % 5 == 0 && n % 3 == 0) // cas fizzbuzz
			write(1, "fizzbuzz\n", 9);
		else if (n % 5 == 0)
			write(1, "buzz\n", 5); // cas buzz
		else if (n % 3 == 0)
			write(1, "fizz\n", 5); // cas fizz
		else
		{
			ft_putnbr(n); // sinon on ecris le nombres
			write(1, "\n", 1);
		}
		n++;
	}
}
