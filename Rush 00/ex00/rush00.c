/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:03:39 by joszabo           #+#    #+#             */
/*   Updated: 2023/08/20 16:08:13 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 && col == 0) || (row == 0 && col == x - 1)
				|| (row == y - 1 && col == 0) || (row == y - 1 && col == x - 1))
				ft_putchar('o');
			else if (row > 0 && row < y - 1 && (col == 0 || col == x - 1))
				ft_putchar('|');
			else if ((row == 0 || row == y - 1) && col > 0 && col < x - 1)
				ft_putchar('-');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
	return (0);
}
