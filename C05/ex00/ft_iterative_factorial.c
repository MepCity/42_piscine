/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:01:31 by yaarslan          #+#    #+#             */
/*   Updated: 2024/07/15 13:02:35 by yaarslan         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sayi;

	sayi = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		sayi *= nb;
		nb--;
	}
	return (sayi);
}
