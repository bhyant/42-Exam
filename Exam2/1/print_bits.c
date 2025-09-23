/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:54:40 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 10:57:07 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	bit = 8;

	while (bit > 0)
	{
		bit--;
		if (octet & (1 << bit)) // si le bit est 1 on write 1 sinon 0
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}