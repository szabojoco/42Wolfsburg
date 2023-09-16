/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:12:31 by joszabo           #+#    #+#             */
/*   Updated: 2023/08/27 15:13:06 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// int main() {
//     char str1[] = "apple pie";
//     char str2[] = "apple crumble";

//     int result = ft_strncmp(str1, str2, 5);

//     if (result == 0) {
//         printf("The first 5 characters are equal.\n");
//     } else if (result < 0) {
//         printf("str1 is before str2 in the first 5 characters.\n");
//     } else {
//         printf("str2 is before str1 in the first 5 characters.\n");
//     }

//     return (0);
// }
