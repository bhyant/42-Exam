/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:49:05 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 12:52:40 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	octet = ((octet >> 4) | (octet << 4));
	octet = ((octet >> 2) & 0x33) | ((octet << 2) & 0xCC);
	octet = ((octet >> 1) & 0x55) | ((octet << 1) & 0xAA);
	return (octet);
}