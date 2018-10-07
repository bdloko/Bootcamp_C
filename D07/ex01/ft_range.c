/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdloko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 15:16:02 by bdloko            #+#    #+#             */
/*   Updated: 2017/05/03 15:16:52 by bdloko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *table;

	if (min >= max)
		return (0);
	table = (int *)malloc(sizeof(*table) * (max - min + 1));
	i = 0;
	while (min + i < max)
	{
		table[i] = min + i;
		i++;
	}
	table[i] = 0;
	return (table);
}
