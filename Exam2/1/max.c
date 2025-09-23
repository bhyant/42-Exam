/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:15:30 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 11:20:02 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	i = 0; // index pour le tableau
	int	max = 0; //le resultat

	if (len == 0) // si la len est = a 0 on return 0
		return (0);
	max = tab[0]; // on mets le res a tab[0]
	while (i < len) // tant que i est inferieur a la len on compare max a tab[i]
	{
		if (max < tab[i])
			max = tab[i]; // on effectue le changement si max et inferieur a tab[i]
		i++;
	}
	return (max);
}
