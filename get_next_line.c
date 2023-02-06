/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpetros <tpetros@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:01:46 by tpetros           #+#    #+#             */
/*   Updated: 2023/01/17 23:01:47 by tpetros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_all_read(int fd)
{
	char	*buff_read;
	char	*all_read;
	size_t	read_bytes;

	read_bytes = 0;
	buff_read = (char *) malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff_read)
		return (NULL);
	all_read = ft_strdup("");
	while (!ft_strchr(buff_read, '\n'))
	{
		read_bytes = read(fd, buff_read, BUFFER_SIZE);
		all_read = ft_strjoin(all_read, buff_read);
	}
	return (all_read);
}

char	*ft_stripped_line(char *stat_chars)
{
	char	*line_stripped;
	size_t	i;
	
	i = 0;
	while (stat_chars && stat_chars[i] != '\n')
		i++;
	line_stripped = (char *) malloc(sizeof(char) * (i + 1));
	i = 0;
	while (stat_chars && stat_chars[i] != '\n')
	{
		line_stripped[i] = stat_chars[i];
		i++;
	}
	if (stat_chars[i] == '\n')
	{
		line_stripped[i] = '\n';
		i++;
	}
	line_stripped[i] = '\0';
	return (line_stripped);
}

char	*ft_left_chars(char *extraline)
{
	size_t	i;

	i = 0;
	while (extraline[i] != '\n')
	{
		i++;
		extraline++;
	}
	return (extraline);
}

char	*get_next_line(int fd)
{
	char			*next_line;
	static	char	*extra_chars;

	if (fd < 0 || BUFFER_SIZE >= INT_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	extra_chars = ft_all_read(fd);
	next_line = ft_stripped_line(extra_chars);
	extra_chars = ft_left_chars(extra_chars);
	return (next_line);
}
