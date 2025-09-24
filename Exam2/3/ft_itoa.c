/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:57:05 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/24 16:11:15 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	countnum(int n) // fonction qui compte la longueur du num pour malloc la bonne size
{
	int		count = 0;
	long	nb = n;

	if (nb <= 0) // on verifie si c'est 0 ou negatif et on mets count a 1 pour bien malloc le - ou le 0
		count = 1;
	while (nb) // tant que nb existe on le divise par 10 et on incremente count
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	int	len = countnum(nbr); // len pour malloc et pr mettre les char correctement
	long	num = nbr; // long pour transformer le int en long
	char	*array; // tableau qui va contenir le nombres

	array = malloc(sizeof(char) * (len + 1)); // on malloc len + 1
	if (!array)
		return (NULL);
	array[len] = '\0'; // on place le \0
	len--;
	if (num < 0) // si negatif, placer le signe
	{
		array[0] = '-';
		num = -num;
	}
	// remplir les chiffres depuis la fin
	while (num >= 10)
	{
		array[len] = (num % 10) + '0'; // inverse de atoi on fait % 10 et + '0'
		num /= 10; // on divise le num par 10 a chaque conversion
		len--;
	}
	// dernier chiffre (ou seul chiffre pour 0)
	array[len] = (num % 10) + '0';
	return (array);
}