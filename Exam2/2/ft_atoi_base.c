/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 21:53:15 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 21:59:21 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(char *str, int str_base)
{
	int	res = 0;
	int	i = 0;
	int	sign = 1;

	if (str[0] == '-') // on gere le signe
	{
		sign *= -1;
		i++;
	}
	while (str[i]) // tant que str existe on fait la conversion pour chaque cas
	{
		if (str[i] >= '0' && str[i] <= '9') // si c'est entre 0 et 9 meme calcul que atoi
			res = res * str_base + (str[i] - '0');
		else if (str[i] >= 'A' && str[i] <= 'F') // pour A et F c'est -55 car F en ascii - 55 = 15 et 15 = F en hexa
			res = res * str_base + (str[i] - 55);
		else if (str[i] >= 'a' && str[i] <= 'f') // meme principe mais avec 87
			res = res * str_base + (str[i] - 87);
		else // si c'est pas un char de la base 16 on break
			break ;
		i++;
	}
	return (res * sign);
}