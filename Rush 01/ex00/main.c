/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veantons <veantons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:17:24 by veantons          #+#    #+#             */
/*   Updated: 2023/08/27 17:12:14 by veantons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Assume puzzle function is defined somewhere
int		puzzle(int sides[4][4]);
int		validate(int argc, char **argv, int numbers[]);

void	fill_sides(int numbers[], int sides[4][4])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			sides[i][j] = numbers[k];
			k++;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	numbers[16];
	int	sides[4][4];

	if (validate(argc, argv, numbers) != 0)
	{
		write(1, "error\n", 6);
		return (0);
	}
	fill_sides(numbers, sides);
	puzzle(sides);
	return (0);
}
