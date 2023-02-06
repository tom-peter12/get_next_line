/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpetros <tpetros@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:02:10 by tpetros           #+#    #+#             */
/*   Updated: 2023/01/17 23:02:13 by tpetros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_j;
	int		i;
	int		j;

	if (!(s1) || !(s2))
		return (NULL);
	str_j = (char *)malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2)) + 1);
	i = 0;
	j = 0;
	if (!str_j)
		return (0);
	while (s1[i])
	{
		str_j[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str_j[i] = s2[j];
		j++;
		i++;
	}
	str_j[i] = '\0';
	return (str_j);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *src, int c)
{
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)src;
	character = (unsigned char)c;
	while (*str != character)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return ((char *)str);
}

char	*ft_strdup(const char *src)
{
	char	*duplicated;
	int		i;

	i = 0;
	duplicated = (char *)malloc((ft_strlen(src) * sizeof(char)) + 1);
	if (!duplicated)
		return (NULL);
	while (src[i] != '\0')
	{
		duplicated[i] = src[i];
		i++;
	}
	duplicated[i] = '\0';
	return (duplicated);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*p;
	unsigned char		*q;

	p = (unsigned char *) s1;
	q = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while ((*p == *q) && n - 1 > 0)
	{
		p++;
		q++;
		n--;
	}
	return ((int)(*p - *q));
}
