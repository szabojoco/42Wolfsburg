/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veantons <veantons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:15:11 by veantons          #+#    #+#             */
/*   Updated: 2023/08/27 17:11:41 by veantons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_to_int(char c)
{
	return (c - '0');
}

int	validate_numbers(int numbers[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (numbers[i] < 1 || numbers[i] > 4)
			return (0);
		i++;
	}
	return (1);
}

void	update_count_and_temp(int *count, int *temp, int numbers[])
{
	if (*count < 16)
	{
		numbers[*count] = *temp;
		(*count)++;
	}
	*temp = 0;
}

int	validate(int argc, char **argv, int numbers[])
{
	char	*input;
	int		count; 
	int		temp;

	if (argc != 2)
		return (1);
	input = argv[1];
	count = 0;
	temp = 0;
	while (*input)
	{
		if (*input >= '0' && *input <= '9')
			temp = temp * 10 + char_to_int(*input);
		else if (*input == ' ')
			update_count_and_temp(&count, &temp, numbers);
		else
			return (1);
		input++;
	}
	update_count_and_temp(&count, &temp, numbers);
	if (count != 16 || !validate_numbers(numbers, 16))
		return (1);
	return (0);
}
