/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:51:00 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/24 15:55:52 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int tmp; // tmp pour swap les valeurs
	t_list *head; // nouvelle list avec les maillons triee

	head = tmp;
	while (lst != NULL && lst->next != NULL) // tant que la list n'est pas NULL et que le maillon ne l'est pas aussi on fait la comparaison
	{
		if ((*cmp)(lst->data, lst->next->data) == 0) // si la comparaison est a 0 on fait un swap 
		{
			tmp = lst->data; // on mets la data dans le tmp
			lst->data = lst->next->data; // on attribue a data la data du maillon suivant
			lst->next->data = tmp; // on mets le tmp a la data suivante
			lst = head; // on mets a jour la list triee
		}
		else
			lst = lst->next; // si la comparaison n'est pas == 0 on passe au maillon suivant
	}
	return (head); // on return la nouvelle liste
}