/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szabojoco <szabojoco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:12:37 by szabojoco         #+#    #+#             */
/*   Updated: 2023/10/04 09:22:28 by szabojoco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combination(char number1a, char number1b, char number2a,
		char number2b)
{
	ft_putchar(number1a);
	ft_putchar(number1b);
	ft_putchar(' ');
	ft_putchar(number2a);
	ft_putchar(number2b);
}

void	print_combinations(void)
{
	char	number1a;
	char	number1b;
	char	number2a;
	char	number2b;

	number1a = '0';
	while (number1a <= '9')
	{
		number1b = number1a + 1;
		while (number1b <= '9')
		{
			number2a = '0';
			while (number2a <= '9')
			{
				number2b = '0';
				while (number2b <= '9')
				{
					print_combination(number1a, number1b, number2a, number2b);
					if (!(number1a == '9' && number1b == '8' && number2a == '9'
							&& number2b == '9'))
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
					number2b++;
				}
				number2a++;
			}
			number1b++;
		}
		number1a++;
	}
}

// int	main(void)
// {
// 	print_combinations();
// 	return (0);
// }
