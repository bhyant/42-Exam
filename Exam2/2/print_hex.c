/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:40:02 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 13:43:47 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str) // atoi simplifiee
{
	int	i;
	int result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

void	print_hex(int nb) // fonction pour afficher en base 16
{
	char base[] = "0123456789abcdef"; // on definis la base

	if (nb > 16) // meme principe que putnbr
		print_hex(nb / 16);
	write(1, &base[nb % 16], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
}