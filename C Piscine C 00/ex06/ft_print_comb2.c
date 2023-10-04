/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szabojoco <szabojoco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:12:37 by szabojoco         #+#    #+#             */
/*   Updated: 2023/10/04 10:12:23 by szabojoco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combinations(void)
{
	char	number1a;
	char	number1b;
	char	number2a;
	char	number2b;

	number1a = '0';
	number1b = '0';
	number2a = '0';
	number2b = '1';
	while (number1a <= '9')
	{
		while (number1b <= '9')
		{
			while (number2a <= '9')
			{
				while (number2b <= '9')
				{
					ft_putchar(number1a);
					ft_putchar(number1b);
					ft_putchar(' ');
					ft_putchar(number2a);
					ft_putchar(number2b);
					if (!(number1a == '9' && number1b == '9' && number2a == '9'
							&& number2b == '9'))
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
					number2b++;
				}
				number2a++;
				number2b = '0';
			}
			number1b++;
			number2a = number1a;
			number2b = number1b + 1;
		}
		number1a++;
		number1b = '0';
	}
}

// int	main(void)
// {
// 	print_combinations();
// 	return (0);
// }
