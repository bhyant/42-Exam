/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:06:59 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/24 19:14:39 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i = 2; // on commence avec i = 2
	int	nb = 0;

	if (ac == 2) // verification des arg
	{
		nb = atoi(av[1]); // on atoi av[1]
		if (nb == 1) // av[1] est 1 on printf 1
			printf("1");
		while (i <= nb) // tant que i est inferieur a nb on vois si nb est divisible par i
		{
			if (nb % i == 0)
			{
				printf("%d", i); // si il l'est on le printf et on mets * si i est different de nb
				if (i != nb)
					printf("*");
				nb /= i; // on divise nb par i
			}
			else
				i++;
		}
	}
	printf("\n");
}