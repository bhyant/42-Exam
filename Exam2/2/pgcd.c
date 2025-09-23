/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 19:37:07 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 19:42:07 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // pour printf
#include <stdlib.h> // pour la fonction atoi de la libC

void	pgcd(int a, int b)
{
	int	n = a;

	while (n > 0) // tant que n n'est pas = a 0 on verifie si il est un denominateur commun de a et b
	{
		if (a % n == 0 && b % n == 0)
		{
			printf("%d", n); // si il l'est on le print et on return
			return ;
		}
		--n;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		pgcd(atoi(av[1]), atoi(av[2]));
	printf("\n");
}