/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veantons <veantons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:32:14 by veantons          #+#    #+#             */
/*   Updated: 2023/08/27 17:14:23 by veantons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_skyscraper(int box[4][4], int sides[4][4]);

void	print_box(int box[4][4])
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = box[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	is_box_full(int box[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (box[i][j] != 4)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	increment_base_4(int box[4][4])
{
	int	i;
	int	j;

	i = 3;
	while (i >= 0)
	{
		j = 3;
		while (j >= 0)
		{
			if (box[i][j] < 4)
			{
				box[i][j]++;
				return ;
			}
			else
			{
				box[i][j] = 1;
			}
			j--;
		}
		i--;
	}
}

int	puzzle(int sides[4][4])
{
	int	i;
	int	j;
	int	box[4][4];

	i = 0;
	while (i < 4) 
	{
		j = 0;
		while (j < 4)
		{
			box[i][j] = 1;
			j++;
		}
		i++;
	}
	while (!is_valid_skyscraper(box, sides) && !is_box_full(box))
		increment_base_4(box);
	if (is_valid_skyscraper(box, sides))
		print_box(box);
	else
		write(1, &"error1\n", 7);
	return (0);
}
