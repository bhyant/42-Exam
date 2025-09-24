/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:42:04 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/24 15:48:51 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> // Pour le NULL
#include "ft_list.h" // header fait par nous avec la struct

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL) // on verifie si la list existe
		return ;
	t_list *cur = *begin_list; // on creer une liste qui pointe sur begin_list
	if (cmp(cur->data, data_ref) == 0) // si la data du maillon correspond a la data_ref on free cur
	{
		*begin_list = cur->next; // on saute le maillon qu'on free
		free(cur); // on le free
		ft_list_remove_if(begin_list, data_ref, cmp); // on rapelle la fonction
	}
	cur = *begin_list; // si la valeur n'est pas la meme on l'execute avec &cur->next
	ft_list_remove_if(&cur->next, data_ref, cmp);