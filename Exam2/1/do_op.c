/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:20:24 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 11:23:35 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4 && av[2][1] == '\0')
	{
		if (av[2][0] == '+')
			printf("%d", atoi(av[1]) + atoi(av[2]));
		if (av[2][0] == '-')
			printf("%d", atoi(av[1]) - atoi(av[2]));
		if (av[2][0] == '*')
			printf("%d", atoi(av[1]) * atoi(av[2]));
		if (av[2][0] == '/')
			printf("%d", atoi(av[1]) / atoi(av[2]));
		if (av[2][0] == '%')
			printf("%d", atoi(av[1]) % atoi(av[2]));
	}
	printf("\n");
}