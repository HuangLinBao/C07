/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:58:54 by tsabri            #+#    #+#             */
/*   Updated: 2024/09/04 12:17:47 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	len;

	if (!s)
		return (0);
	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

int	ft_strlen_total(int size, char **strs, char *sep)
{
	int	sum;
	int	len_sep;
	int	i;

	if (size == 0)
		return (0);
	if (!strs || !sep)
		return (0);
	i = 0;
	sum = 0;
	len_sep = ft_strlen(sep);
	while (i < size)
	{
		sum += ft_strlen(strs[i]);
		sum += len_sep;
		i++;
	}
	sum -= len_sep;
	return (sum);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	if (size == 0)
		return (malloc(sizeof (strs)));
	if (!strs || !sep)
		return (NULL);
	s = malloc(sizeof (char) * (ft_strlen_total(size, strs, sep) + 1));
	c = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			s[c++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != (size - 1))
			s[c++] = sep[j++];
		i++;
	}
	s[c] = '\0';
	return (s);
}
