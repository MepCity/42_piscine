/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:11:44 by yaarslan          #+#    #+#             */
/*   Updated: 2024/07/06 18:23:44 by yaarslan         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *tab, int n)
{
	int		i;
	bool	is_sorted;

	i = 1;
	is_sorted = true;
	while (i < n)
	{
		if (tab[i - 1] >= tab[i])
			is_sorted = false;
		i++;
	}
	if (is_sorted)
	{
		i = 0;
		while (i < n)
			ft_putchar(tab[i++] + '0');
		if (tab[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int		i;
	int		tab[10];

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10 - n))
	{
		print(tab, n);
		tab[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
			i--;
		}
	}
}
