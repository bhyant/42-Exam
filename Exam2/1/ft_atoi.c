/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:06:38 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 11:10:49 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i = 0;
	int	res = 0;
	int	sign = 1;

	while ((str[i] >= 9 && str[i] <= 13) && str[i] == 32) // on skip les white spaces
		i++;
	if (str[i] == '-' || str[i] == '+') // on gere le signe
	{
		if (str[i] == '-') // si c'est negatif on fait passer sign a -1
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9') // tant que c'est un chiffre on fait la conversion
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign); // on return le resultat * le signe
}