/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 13:49:25 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/12/06 14:10:38 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int		j = 0;
	int		i = 0;
	int		r = 0;
	int		len = 0;
	char	buffer[70000];
	char	c;

	if (ac != 2)
		return (1);
	len = strlen(av[1]);
	if (len == 0)
		return (1);
	r = read(0, &c, 1);
	while (r)
	{
		buffer[i] = c;
		i++;
		r = read(0, &c, 1);
	}
	if (r < 0)
		return (perror("Error :"), 1);
	buffer[i] = 0;
	i = 0;
	while (buffer[i])
	{
		if (ft_strncmp(av[1], &buffer[i], len) == 0)
		{
			while (j < len)
			{
				write(1, "*", 1);
				j++;
			}
			i += len;
			j = 0;
		}
		else
		{
			write(1, &buffer[i], 1);
			i++;
		}
	}
}