/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:59:41 by joszabo           #+#    #+#             */
/*   Updated: 2023/08/28 09:19:51 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main() {
//     printf("%d\n", ft_str_is_uppercase("alcjnadlcjansc")); // 0
//     printf("%d\n", ft_str_is_uppercase("AKHGKHCKCJB")); // 1
//     printf("%d\n", ft_str_is_uppercase("1242152637")); // 0
//     printf("%d\n", ft_str_is_uppercase("")); // 1
//     return (0);
// }
