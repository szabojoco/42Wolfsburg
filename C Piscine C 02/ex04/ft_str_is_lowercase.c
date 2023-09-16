/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:51:17 by joszabo           #+#    #+#             */
/*   Updated: 2023/08/24 11:51:18 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main() {
//     printf("%d\n", ft_str_is_lowercase(""));
//     printf("%d\n", ft_str_is_lowercase("dvjsnkvsjn"));
//     printf("%d\n", ft_str_is_lowercase("Abcwevjnv1"));
//     printf("%d\n", ft_str_is_lowercase("advjsvkjbn00"));
//     return (0);
// }
