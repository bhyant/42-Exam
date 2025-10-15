/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:35:49 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/10/15 14:20:52 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_union(char *str, char c, int pos) // fonction qui check si le char c n'est pas present plus tot dans la string
{
	int	i = 0;

	while (i < pos)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char *ft_strcat(char *dest, char *src) // fonction qui va concatener av[1] et av[2]
{
	int	i = 0;
	int	j = 0;
	
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 3) // verification des arguments
	{
		ft_strcat(av[1], av[2]); // on concatene le tout et on parcours av[1]
		while (av[1][i])
		{
			if (!ft_union(av[1], av[1][i], i)) // on ecris le char que si il n'est pas deja present avant
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}