/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   topbottom.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veantons <veantons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:08:37 by veantons          #+#    #+#             */
/*   Updated: 2023/08/27 14:14:31 by veantons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_top(int box[4][4], int sides[4][4])
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
			if (box[j][i] > tallest)
			{
				tallest = box[j][i];
				count++;
			}
			j++;
		}
		if (sides[0][i] != count)
			return (0);
		i++;
	}
	return (1);
}

int	check_bottom(int box[4][4], int sides[4][4])
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
			if (box[j][i] > tallest)
			{
				tallest = box[j][i];
				count++;
			}
			j--;
		}
		if (sides[1][i] != count)
			return (0);
		i++;
	}
	return (1);
}

int	bottomtop(int box[4][4], int sides[4][4])
{
	if (!check_top(box, sides))
		return (0);
	if (!check_bottom(box, sides))
		return (0);
	return (1);
}
