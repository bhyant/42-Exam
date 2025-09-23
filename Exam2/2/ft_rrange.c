/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:14:01 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 13:22:27 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i = 0;
	int	*array;

	if (end < start) // si end est inferieur a start on malloc start - end
	{
		array = malloc(sizeof(int) * (start - end + 1));
		if (!array)
			return (NULL);
		while (end <= start) // tant que end est inferieur ou egal a start on mets la valeurs dans l'array
			array[i++] = end++;
	}
	else // meme principe mais on decremene end
	{
		array = malloc(sizeof(int) * (end - start + 1));
		if (!array)
			return (NULL);
		while (end >= start)
			array[i++] = end--;
	}
	return (array);
}