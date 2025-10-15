/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:54:44 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/10/15 14:42:10 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void fill(char **tab, t_point size, char target, int pos_y, int pos_x)
{
	if (pos_y < 0 || pos_x < 0 || pos_y >= size.y || pos_x >= size.x) // on check si les valeurs entree sont coherente
		return;
	if (tab[pos_y][pos_x] == 'F' || tab[pos_y][pos_x] != target) // on check si la case est deja visite ou que la case n'est pas une case explorable
		return;
	tab[pos_y][pos_x] = 'F'; // on mets le F une fois que la case est visite
	fill(tab, size, target, pos_y -1, pos_x); // recursive dans tout les sens 
	fill(tab, size, target, pos_y +1, pos_x);
	fill(tab, size, target, pos_y, pos_x - 1);
	fill(tab, size, target, pos_y, pos_x + 1);
}


void flood_fill(char **tab, t_point size, t_point begin)
{
	char target = tab[begin.y][begin.x]; // on definis la position de depart
	fill(tab, size, target, begin.y, begin.x); // on utilise la fonction qui va parcourir toute la map
}