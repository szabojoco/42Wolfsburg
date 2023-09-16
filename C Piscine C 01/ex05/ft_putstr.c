/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:54:41 by joszabo           #+#    #+#             */
/*   Updated: 2023/08/21 15:54:43 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*a;

	a = str;
	while (*a != '\0')
	{
		write(1, a, 1);
		a++;
	}
}
