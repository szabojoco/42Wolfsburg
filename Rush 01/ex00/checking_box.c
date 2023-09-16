/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_box.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veantons <veantons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:48:09 by veantons          #+#    #+#             */
/*   Updated: 2023/08/27 17:17:24 by veantons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	bottomtop(int box[4][4], int sides[4][4]);
int	leftright(int box[4][4], int sides[4][4]);

int	ft_checking(int box[4][4], int sides[4][4])
{
	if (!bottomtop(box, sides))
		return (0);
	if (!leftright(box, sides))
		return (0);
	return (1);
}

int	is_valid_skyscraper(int box[4][4], int sides[4][4])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 4) 
	{
		j = 0;
		while (j < 4) 
		{
			k = j + 1;
			while (k < 4)
			{
				if (box[i][j] == box[i][k] || box[j][i] == box[k][i])
					return (0);
				k++;
			}
			j++;
		}
		i++;
	}
	if (!ft_checking(box, sides))
		return (0);
	return (1);
}
