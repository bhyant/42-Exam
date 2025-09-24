/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:15:47 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/24 19:23:30 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, int n) // fonction strncpy de base
{
	int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str)
{
	int		i; // index de la str
	int		j; // index de debut de mots
	int		k; // index pour placer dans le tab
	char	**tab;

	i = 0;
	j = 0;
	k = 0;
	tab = malloc(sizeof(char) * 10000); // malloc 10000 pour pas ce casser la tete
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) // on saute les espaces , \t et \n
			i++;
		j = i; // on place j au debut d'un mot
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') // tant que c'est un char autre qu'un \t \n et un espaces on incremente pour prendre le mot au complet
			i++;
		if (i > j) // si j est inferieur a i on place le mot dans le tab
		{
			tab[k] = malloc(sizeof(char) * ((i - j) + 1)); // malloc de la taille du mot + 1 
			ft_strncpy(tab[k], &str[j], i - j); // copie du mot dans le tableau
			k++;
		}
	}
	tab[k] = '\0';
	return (tab);
}