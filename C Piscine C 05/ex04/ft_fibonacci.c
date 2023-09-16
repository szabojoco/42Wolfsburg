/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:40:19 by joszabo           #+#    #+#             */
/*   Updated: 2023/09/04 16:40:24 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int main()
// {
//     int n = 4;
//     int result = ft_fibonacci(n);

//     if (result != -1)
//         printf("Fibonacci element at index %d: %d\n", n, result);
//     else
//         printf("Invalid index\n");

//     return (0);
// }
