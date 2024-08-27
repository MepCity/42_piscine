/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:06:02 by yaarslan          #+#    #+#             */
/*   Updated: 2024/07/07 21:05:35 by yaarslan         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int width, char start, char middle, char end)
{
	int	index;

	index = 1;
	while (index <= width)
	{
		if (index == 1)
			ft_putchar(start);
		else if (index == width)
			ft_putchar(end);
		else
			ft_putchar(middle);
		index++;
	}
	ft_putchar('\n');
}

void	ft_rush(int x, int y)
{
	int	row_index;

	if (x <= 0 || y <= 0)
	{
		write(1, "ERROR", 5);
		return ;
	}
	row_index = 1;
	while (row_index <= y)
	{
		if (row_index == 1)
			ft_print(x, 'A', 'B', 'A');
		else if (row_index == y)
			ft_print(x, 'C', 'B', 'C');
		else
			ft_print(x, 'B', ' ', 'B');
		row_index++;
	}
}
