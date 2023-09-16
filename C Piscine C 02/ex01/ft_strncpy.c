/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:54:33 by joszabo           #+#    #+#             */
/*   Updated: 2023/08/27 19:08:09 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*original_dest;

	original_dest = dest;
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (original_dest);
}

// int main(void)
// {
//     char destination[20];
//     char src[] = "something2";
//     unsigned int nr = 4;
//     ft_strncpy(destination, src, nr);
//     write(STDOUT_FILENO, destination, strlen(destination));
//     return 0;
// }
