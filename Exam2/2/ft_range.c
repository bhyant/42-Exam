/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:07:37 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 13:23:35 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*array;
	int	i = 0;

	if (start < end) // si start est inferieur a end on malloc end - start et on remplis l'array 
	{
		array = malloc(sizeof(int) * (end - start + 1));
		if (!array)
			return (NULL);
		while (start <= end)
			array[i++] = start++;
	}
	else // inverse on fait start - end et on remplis l'array 
	{
		array = malloc(sizeof(int) * (start - end + 1));
		if (!array)
			return (NULL);
		while (end <= start)
			array[i++] = start--;
	}
	return (array);
}