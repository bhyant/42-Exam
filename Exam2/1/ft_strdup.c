/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:11:08 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 11:15:18 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest = NULL; // * qui va contenir la copie de src
	int	i = 0;
	int	len = 0; // len pour l'allocation memoire de dest

	while (src[len]) // on mets la len a la taille de src
		len++;
	dest = malloc(sizeof(char) * len + 1); // on malloc dest de len + 1 pour le \0
	if (!dest)
		return (NULL);
	while (src[i]) // on copie la src dans la dest
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; // on rajoute le \0 et on return la dest
	return (dest);
}