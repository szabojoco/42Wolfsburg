/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:44:26 by joszabo           #+#    #+#             */
/*   Updated: 2023/08/20 18:53:22 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	if (n < 0)
	{
		negative = 'N';
		write(1, &negative, 1);
	}
	else
	{
		positive = 'P';
		write(1, &positive, 1);
	}
}
