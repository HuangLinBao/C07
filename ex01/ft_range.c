/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:55:56 by tsabri            #+#    #+#             */
/*   Updated: 2024/09/03 10:05:54 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*arr;
	int		rcount;
	int		i;

	if (min >= max)
		return (NULL);
	rcount = max - min;
	arr = malloc(rcount);
	i = 0;
	while (i < rcount)
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}
