/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:16:56 by yaarslan          #+#    #+#             */
/*   Updated: 2024/07/07 16:17:00 by yaarslan         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	tmp;

	a = 0;
	b = size - 1;
	while (a < size / 2)
	{
		tmp = tab[a];
		tab[a] = tab[b];
		tab[b] = tmp;
		a++;
		b--;
	}
}
