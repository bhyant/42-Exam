/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_queens.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 23:19:19 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/12/29 23:27:44 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	is_safe(int	*board, int col, int row)
{
	int	i = 0;

	while (i < col)
	{
		if (board[i] == row || row - board[i] == col - i || board[i] - row == col - i)
			return (0);
		i++;
	}
	return (1);
}

void	solve(int *board, int col, int n)
{
	int	row = 0;
	int	i = 0;

	if (col == n)
	{
		while (i < n)
		{
			if (i > 0)
				printf(" ");
			printf("%d", board[i]);
			i++;
		}
		printf("\n");
	}
	while (row < n)
	{
		if (is_safe(board, col, row))
		{
			board[col] = row;
			solve(board, col + 1, n);
		}
		row++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	n = atoi(av[1]);
		int	board[20];

		if (n < 4)
			return 1;
		solve(board, 0, n);
	}
	else
		return 1;
}
