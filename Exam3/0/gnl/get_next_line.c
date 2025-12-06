/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 14:16:10 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/12/06 14:32:49 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(char *src) // strdup pour duppliquer line
{
	int	i = 0;
	int	len = 0;
	char *dest;
	
	while (src[len])
		len++;
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*get_next_line(int fd)
{
	static int	buffer_pos = 0;
	static int	buffer_read = 0;
	static char	buffer[BUFFER_SIZE];
	char		line[10000];
	int			i;
	
	i = 0;
	if (fd < 0 || BUFFER_SIZE <= 0) // verification du fd et du buffer size
		return (NULL);
	while (1)
	{
		if (buffer_pos >= buffer_read) // si le buffer est deja plein on ne read pas on remplis juste line
		{
			buffer_read = read(fd, buffer, BUFFER_SIZE);
			buffer_pos = 0;
			if (buffer_read == 0)
				break ;
		}
		line[i++] = buffer[buffer_pos++];
		if (line[i - 1] == '\n') // si il y'a le /n on break
			break ;
	}
	if (i == 0) // si i = 0 on return NULL sinon on place le \0 et on strdup line
		return (NULL);
	line[i] = '\0';
	return (ft_strdup(line));
}