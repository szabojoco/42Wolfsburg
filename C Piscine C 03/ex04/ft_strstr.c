/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:25:00 by joszabo           #+#    #+#             */
/*   Updated: 2023/08/30 13:26:58 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_ptr;
	char	*to_find_ptr;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		str_ptr = str;
		to_find_ptr = to_find;
		while (*str_ptr == *to_find_ptr && *to_find_ptr != '\0')
		{
			str_ptr++;
			to_find_ptr++;
		}
		if (*to_find_ptr == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

// int main() {
//     char str[] = "Hello, world! This is a test.";
//     char to_find[] = "world";
//     char *result = ft_strstr(str, to_find);
//     if (result != NULL) {
//         printf("Substring found at position: %ld\n", result - str);
//     } else {
//         printf("Substring not found.\n");
//     }
//     return (0);
// }
