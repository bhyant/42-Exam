/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:12:11 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/12/02 09:12:12 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

int    ft_strncmp(char *s1, char *s2, int n)
{
    int i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i] && i != n-1)
        i++;
    return (s1[i] - s2[i]);
}

int    main(int ac, char **av)
{
    if (ac == 2)
    {
        int    r = 0;
        int i = 0;
        int j ;
        int len = strlen(av[1]);
        char target[700000];
        char c;

        r = read(0, &c, 1);
        while (r)
        {
            target[i] = c;
            i++;
            r = read(0, &c, 1);
        }
        target[i] = 0;
        i = 0;
        while (target[i])
        {
            if (ft_strncmp(av[1], &target[i], len) == 0)
            {
                j = 0;
                while (j != len)
                {
                    write(1, "*", 1);
                    i++;
                    j++;
                }
            }
            else
            {
                write(1, &target[i], 1);
                i++;
            }
        }
        return (0);
    }
    else
        return (1);
}
