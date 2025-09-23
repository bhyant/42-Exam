/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:03:54 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 13:07:24 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list // stucture deja donne
{
    struct s_list *next;
    void          *data;
}                 t_list;

#include <stdlib.h> // librairie pour importe NULL

int	ft_list_size(t_list *begin_list)
{
	int	count = 0; // count qui va contenir le nombre de maillons de la liste
	
	if (!begin_list) // return 0 si il n'ya pas de liste
		return (0);
	while (begin_list != NULL) // tant que la liste existe on passe au maillon suivant et incremente count
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}