/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joszabo <joszabo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:54:14 by akuat             #+#    #+#             */
/*   Updated: 2023/09/03 23:38:50 by joszabo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculations.h"
#include "number_to_words.h"
#include "rush02.h"
#include <stdio.h>
#include <unistd.h>

int		ft_atoi(char *str);

// finished funct, for getting the rate of a number. ex: num 1000, rate 1000
int	num_devider(int num, char *num_one)
{
	int	divider;
	int	length;
	int	i;

	i = 0;
	length = 0;
	divider = 1;
	while (num >= 10)
	{
		num /= 10;
		divider *= 10;
	}
	while (num_one[length] != '\0')
		length++;
	if (divider > 10000)
		break_three_digits(num_one, divider);
	else
		num_separ(num, divider);
	return (divider);
}

void	into_string(int number, char *result)
{
	int		i;
	int		start;
	int		end;
	char	temp;

	i = 0;
	do
	{
		result[i++] = '0' + (number % 10);
		number /= 10;
	} while (number > 0);
	result[i] = '\0';
	// Reverse the string to get the correct order of digits
	start = 0;
	end = i - 1;
	while (start < end)
	{
		temp = result[start];
		result[start] = result[end];
		result[end] = temp;
		start++;
		end--;
	}
}

// collect three number in arr to one, and send it to be broken

void	sum_array(char *copy[3])
{
	int	total;
	int	i;

	total = 1;
	while (copy[i] != '\0')
	{
		total = total * 10 + (copy[i] - '0');
		i++;
	}
	num_separ(total, 100);
}

// FINISHED -> breaks down 3 digits long numbs, and send to be written
void	num_separ(int num, int rate)
{
	int		current;
	char	*ans1;
	char	*ans2;

	current = 0;
	while (num > 100)
	{
		if (num > 100)
		{
			current = num / rate;
			into_string(current, ans1);
			file_worker(ans1);
			into_string(rate, ans2);
			file_worker(ans2);
			num %= rate;
			rate /= 10;
		}
	}
	if (num >= 0 && num < 21 && num % rate == 0)
		printf("Straight to write:%d", num);
	else
	{
		rate = num % rate;
		current = num - rate;
		printf("bigInt to write:%d\n", current);
		printf("smallInt to write:%d", rate);
	}
}

// breaks dorn tree digigt nums, and send to num_devider(), to be broken more
void	break_three_digits(char *input, int length)
{
	char	copy[4];
	int		copy_index;
	int		i;
	int		new_flag;
	int		ans;

	i = 0;
	new_flag = 0;
	while (i < length)
	{
		copy_index = 0;
		while (copy_index < 3 && i < length)
		{
			copy[copy_index] = input[i];
			copy_index++;
			i++;
		}
		copy[copy_index] = '\0';
		if (copy_index > 0)
		{
			if (new_flag)
				num_separ(ans, 100);
			new_flag = 1;
		}
	}
}

int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	sign = 0;
	num = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\f' || *str == '\v' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign--;
		else if (*str == '+')
			sign++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (sign < 0)
		num = -num;
	return (num);
}
