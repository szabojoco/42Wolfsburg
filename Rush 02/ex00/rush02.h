/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:06:26 by akuat             #+#    #+#             */
/*   Updated: 2023/09/03 23:36:40 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

void	writer_final(char *buffer, int index);
void	writer(char *number, char *buffer);
int		file_worker(char *dig);
char	*findNumberName(int number, char *dictionaryFileName);

#endif