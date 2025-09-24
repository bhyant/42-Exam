/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:29:30 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/24 15:45:06 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> // pour le NULL 
#include "ft_list.h" // header a faire contient la struct de l'enonce

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (!begin_list) // on verifie si la liste existe
		return ;
	while (begin_list != NULL) // tant que la list n'est pas a NULL on applique la fonction
	{
		if (begin_list->data != NULL) // si la data n'est pas NULL on applique la fonction
			(*f)(begin_list->data); // syntaxe donne dans l'ennonce
		begin_list = begin_list->next; // on passe au maillon suivant
	}
}