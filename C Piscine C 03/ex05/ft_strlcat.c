/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:26:48 by joszabo           #+#    #+#             */
/*   Updated: 2023/08/30 12:48:34 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total_len;
	unsigned int	copied;

	dest_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	total_len = dest_len + src_len;
	if (dest_len < size - 1)
	{
		copied = 0;
		while (src[copied] != '\0' && dest_len + copied < size - 1)
		{
			dest[dest_len + copied] = src[copied];
			copied++;
		}
		dest[dest_len + copied] = '\0';
	}
	return (total_len);
}

// int main() {
//     char dest[20] = "Hello, ";
//     char src[] = "world!";
//     unsigned int size = sizeof(dest);

//     unsigned int result_len = ft_strlcat(dest, src, size);

//     printf("Concatenated string: %s\n", dest);
//     printf("Resulting string length: %u\n", result_len);

//     return (0);
// }
