/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_queens.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 23:19:19 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/12/31 09:37:20 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_safe(int *board, int col, int row)
{
    int i;

	i = 0;
    while(i < col)
	{
        if(board[i] == row || (row - board[i] == col - i) || (board[i] - row == col - i))
            return (0);
        i++;
    }
    return 1;
}

void solve(int *board, int n, int col)
{
	int i;
	int row;

    if (col == n)
	{
        i = 0;
        while (i < n)
		{
            if (i > 0)
				printf(" ");
            printf("%d", board[i]);
            i++;
        }
        printf("\n");
        return;
    }
    row = 0;
    while (row < n)
	{
        if (is_safe(board, col, row))
		{
            board[col] = row;
            solve(board, n, col + 1);
        }
        row++;
    }
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int	n = atoi(av[1]);
		int	board[20]

		if (n < 1)
			return 1;
		solve(board, n, 0);
	}
	else
		return 1;
}
