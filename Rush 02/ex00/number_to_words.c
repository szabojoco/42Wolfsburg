/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_to_words.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 23:36:57 by joszabo           #+#    #+#             */
/*   Updated: 2023/09/03 23:39:09 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*findNumberName(int number, char *dictionaryFileName)
{
	FILE	*file;
	char	line[100];
	int		num;
	char	name[50];

	file = fopen(dictionaryFileName, "r");
	if (file == NULL)
	{
		perror("Error opening dictionary file");
		exit(EXIT_FAILURE);
	}
	while (fgets(line, sizeof(line), file) != NULL)
	{
		if (sscanf(line, "%d: %s", &num, name) == 2 && num == number)
		{
			fclose(file);
			return (strdup(name));
		}
	}
	fclose(file);
	return (NULL);
}
