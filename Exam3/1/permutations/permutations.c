/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 21:27:00 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/12/29 22:31:43 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	sort(char *str)
{
	int		i = 0;
	int		j = 0;
	char	temp;

	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] > str[j])
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	perm(char *str, char *res, int *used, int pos, int len)
{
	int	i = 0;

	if (pos == len)
	{
		while (i < len)
			write(1, &res[i++], 1);
		write(1, "\n", 1);
		return ;
	}
	i = 0;
	while (i < len)
	{
		if (!used[i])
		{
			used[i] = 1;
			res[pos] = str[i];
			perm(str, res, used, pos + 1, len);
			used[i] = 0;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return 1;

	int		len = 0;
	int		*used;
	char	*res;

	while (av[1][len])
		len++;
	res = malloc(sizeof(char) * len + 1);
	used = calloc(len, sizeof(int));
	if (!res || !used)
		return 1;
	sort(av[1]);
	perm(av[1], res, used, 0, len);
	free(res);
	free(used);
	return 0;
}
