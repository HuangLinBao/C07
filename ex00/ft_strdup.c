/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:45:51 by tsabri            #+#    #+#             */
/*   Updated: 2024/09/03 10:07:09 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *s)
{
	unsigned int	len;

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

char	*ft_strdup(char *src)
{
	char			*s;
	unsigned int	len;
	unsigned int	i;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	s = malloc(len);
	i = 0;
	while (i < len)
	{
		s[i] = src[i];
		i++;
	}
	return (s);
}
