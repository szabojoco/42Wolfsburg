/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:42:00 by joszabo           #+#    #+#             */
/*   Updated: 2023/09/04 16:42:10 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	prev_sqrt;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (nb);
	else
	{
		sqrt = 1;
		prev_sqrt = 0;
		while (sqrt != prev_sqrt)
		{
			prev_sqrt = sqrt;
			sqrt = (nb / sqrt + sqrt) / 2;
		}
		if (sqrt * sqrt == nb)
			return (sqrt);
		else
			return (0);
	}
}

// int main()
// {
//     int number = 16;
//     int result = ft_sqrt(number);
//     if (result != 0)
//         printf("Square root of %d: %d\n", number, result);
//     else
//         printf("Square root of %d is irrational.\n", number);
//     return (0);
// }
