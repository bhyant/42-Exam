/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 09:42:20 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/27 09:46:17 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	int tmp; // tmp pour le swap
	unsigned int i;
	unsigned int j;

	i = 0;
	while (i < size - 1) // tant que i est inferieur a size - 1 on compare les valeurs
	{
		j = i; // on mets j = i
		while (j < size) // tant que j est inferieur a size on compare les valeurs
		{
			if (tab[i] > tab[j]) // si tab[i] est superieur a tab[j] on swap
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++; // on incremente j
		}
		i++;
	}
}

// on trie directement dans le bon ordre pour eviter d'effectuer plusieurs fois la boucle