/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:15:59 by yaarslan          #+#    #+#             */
/*   Updated: 2024/07/15 21:05:40 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	guess;
	int	next_guess;

	if (nb <= 0)
		return (0);
	guess = nb / 2;
	if (guess == 0)
		return (nb);
	while (1)
	{
		next_guess = (guess + (nb / guess)) / 2;
		if (next_guess == guess)
			break ;
		guess = next_guess;
	}
	if (guess * guess == nb)
		return (guess);
	return (0);
}
