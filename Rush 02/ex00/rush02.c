/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 23:35:47 by joszabo           #+#    #+#             */
/*   Updated: 2023/09/03 23:39:49 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculations.h"
#include "number_to_words.h"
#include "rush02.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	writer_final(char *buffer, int index)
{
	while (buffer[index] != '\n')
	{
		if (buffer[index] >= 'a' && buffer[index] <= 'z')
		{
			write(1, &buffer[index], 1);
		}
		index++;
	}
}

void	writer(char *number, char *buffer)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (buffer[j] != '\0')
	{
		if (buffer[j] == number[i])
		{
			k = j;
			while (number[i] != '\0' && buffer[k] == number[i])
			{
				i++;
				k++;
			}
			if (number[i] == '\0' && (buffer[k] == ':' || buffer[k] == ' '))
			{
				writer_final(buffer, k);
			}
			else
			{
				i = 0;
			}
		}
		j++;
	}
}
int	dict_error_handler(int num)
{
	if (num == 1)
		perror("Error opening file\n");
	else if (num == 2)
		perror("Error reading the file\n");
	else if (num == 3)
		perror("Error closing file\n");
	return (0);
}

int	file_worker(char *dig)
{
	int		dict;
	ssize_t	bytes_read;
	char	buffer[1024];
	int		i;
	char	data[20];

	i = 0;
	dict = open("numbers.dict", O_RDONLY);
	if (dict == -1)
	{
		dict_error_handler(1);
		return (0);
	}
	bytes_read = read(dict, buffer, sizeof(buffer));
	buffer[bytes_read] = '\0';
	if (bytes_read == -1)
	{
		dict_error_handler(2);
		close(dict);
		return (0);
	}
	if (close(dict) == -1)
		dict_error_handler(3);
	writer(dig, buffer);
	return (1);
}

int	main(int argc, char *argv[])
{
	char	*num_one;
	char	*name;

	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s <number>\n", argv[0]);
		return (1);
	}
	num_one = argv[1];
	name = findNumberName(atoi(num_one), "numbers.dict");
	if (name != NULL)
	{
		printf("%s\n", name);
		free(name);
	}
	else
	{
		fprintf(stderr, "Error: Number not found in dictionary\n");
	}
	return (0);
}
