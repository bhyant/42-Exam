/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:04:10 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 11:06:22 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	if (n == 0) // on verifie si n est egal a 0
		return (0);
	while (n % 2 == 0) // tant qu'il est divisible par 2 on le divise par 2
		n /= 2;
	if (n == 1) // si a la fin de la boucle n n'est pas a 1 ce n'est pas une puissance de 2
		return (1);
	else
		return (0);
}