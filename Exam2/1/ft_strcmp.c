/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:57:28 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 10:59:35 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i]) // tant que les 2 str existe et que les charactere son egaux on incremente
		i++;
	return (s1[i] - s2[i]); // on return la difference entre les 2 char (ASCII)
}