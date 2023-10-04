/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szabojoco <szabojoco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:45:49 by szabojoco         #+#    #+#             */
/*   Updated: 2023/10/04 10:45:50 by szabojoco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combination(int arr[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar('0' + arr[i]);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[n];
	int	maxVal;
	int	i;

	if (n <= 0 || n >= 10)
	{
		return ;
	}
	maxVal = 10 - n;
	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	while (arr[0] <= maxVal)
	{
		print_combination(arr, n);
		if (arr[0] != maxVal)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		i = n - 1;
		while (i >= 0)
		{
			if (arr[i] < 9 - (n - 1 - i))
			{
				arr[i]++;
				break ;
			}
			i--;
		}
		if (i < 0)
		{
			break ;
		}
		while (i < n - 1)
		{
			i++;
			arr[i] = arr[i - 1] + 1;
		}
	}
}

// int	main(void)
// {
// 	int	n;

// 	n = 2;
// 	ft_print_combn(n);
// 	return (0);
// }
