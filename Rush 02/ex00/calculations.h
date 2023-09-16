/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculations.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:15:16 by akuat             #+#    #+#             */
/*   Updated: 2023/09/03 23:36:38 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALCULATIONS_H
# define CALCULATIONS_H

void	break_three_digits(char *input, int length);
void	num_separ(int num, int rate);
void	sum_array(char *copy[3]);
int		num_devider(int num, char *num_one);
int		ft_atoi(char *str);

#endif