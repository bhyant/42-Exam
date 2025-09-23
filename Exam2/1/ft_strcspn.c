/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:59:51 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 11:03:24 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	j = 0;

	while (s[i]) // on parcours la string 
	{
		j = 0; // on remets l'index de reject a 0 pour le comparer a chaque char present dans reject
		while (reject[j]) // on parcours reject pour la comparaison
		{
			if (reject[j] == s[i]) // si il y'a le meme char on return i
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}