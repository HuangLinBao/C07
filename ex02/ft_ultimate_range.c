/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:48:50 by tsabri            #+#    #+#             */
/*   Updated: 2024/09/04 13:56:57 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*mat;
	int		i;
	int		rcount;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	rcount = max - min;
	mat = malloc(rcount * sizeof(int));
	if (!mat)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < rcount)
	{
		mat[i] = min++;
		i++;
	}
	*range = mat;
	return (rcount);
}
