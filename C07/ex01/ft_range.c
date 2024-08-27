/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:11:20 by yaarslan          #+#    #+#             */
/*   Updated: 2024/07/17 19:10:13 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*a;

	if (min >= max)
		return (NULL);
	range = max - min;
	a = (int *)malloc(range * sizeof(int));
	if (!a)
		return (0);
	i = 0;
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
