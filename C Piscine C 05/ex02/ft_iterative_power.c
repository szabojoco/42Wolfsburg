/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:39:55 by joszabo           #+#    #+#             */
/*   Updated: 2023/09/04 15:39:55 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		result = 1;
		i = 0;
		while (i < power)
		{
			result *= nb;
			i++;
		}
		return (result);
	}
}

// int main() {
//     int result = ft_iterative_power(2, 3);
//     printf("Result: %d\n", result);
//     return (0);
// }
