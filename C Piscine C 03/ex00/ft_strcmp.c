/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:11:14 by joszabo           #+#    #+#             */
/*   Updated: 2023/08/27 15:11:26 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

// int main() {
//     char str1[] = "apple";
//     char str2[] = "banana";

//     int result = ft_strcmp(str1, str2);

//     if (result == 0) {
//         printf("The strings are equal.\n");
//     } else if (result < 0) {
//         printf("str1 is lexicographically before str2.\n");
//     } else {
//         printf("str2 is lexicographically before str1.\n");
//     }

//     return (0);
// }
