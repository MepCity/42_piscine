/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:51:03 by yaarslan          #+#    #+#             */
/*   Updated: 2024/07/07 20:58:17 by yaarslan         ###   ########.tr       */
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

	row_index = 1;
	if (x <= 0 || y <= 0)
	{
		write(1, "ERROR", 5);
		return ;
	}
	while (row_index <= y)
	{
		if (row_index == 1)
			ft_print(x, 'o', '-', 'o');
		else if (row_index == y)
			ft_print(x, 'o', '-', 'o');
		else
			ft_print(x, '|', ' ', '|');
		row_index++;
	}
}
