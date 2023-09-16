/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:54:47 by joszabo           #+#    #+#             */
/*   Updated: 2023/08/24 09:54:48 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main() {
//     printf("%d\n", ft_str_is_alpha("1"));
//     printf("%d\n", ft_str_is_alpha("Hello"));
//     printf("%d\n", ft_str_is_alpha("Hello1234"));
//     return (0);
// }
