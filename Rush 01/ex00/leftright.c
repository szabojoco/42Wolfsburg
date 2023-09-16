/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leftright.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veantons <veantons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:12:32 by veantons          #+#    #+#             */
/*   Updated: 2023/08/27 16:41:01 by veantons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_left(int box[4][4], int sides[4][4])
{
	int	i;
	int	tallest;
	int	j;
	int	count;

	i = 0;
	while (i < 4)
	{
		tallest = 0;
		count = 0;
		j = 0;
		while (j < 4)
		{
			if (box[i][j] > tallest)
			{
				tallest = box[i][j];
				count++;
			}
			j++;
		}
		if (sides[2][i] != count)
			return (0);
		i++;
	}
	return (1);
}

int	check_right(int box[4][4], int sides[4][4])
{
	int	i;
	int	tallest;
	int	j;
	int	count;

	i = 0;
	while (i < 4)
	{
		tallest = 0;
		count = 0;
		j = 3;
		while (j >= 0)
		{
			if (box[i][j] > tallest)
			{
				tallest = box[i][j];
				count++;
			}
			j--;
		}
		if (sides[3][i] != count)
			return (0);
		i++;
	}
	return (1);
}

int	leftright(int box[4][4], int sides[4][4])
{
	if (!check_left(box, sides))
		return (0);
	if (!check_right(box, sides))
		return (0);
	return (1);
}
