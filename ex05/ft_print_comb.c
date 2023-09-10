/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:55:10 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/07 18:35:03 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	add_num_to_array(char array[], char num1, char num2, char num3)
{
	array[0] = '0' + num1;
	array[1] = '0' + num2;
	array[2] = '0' + num3;
	if (array[0] == '7')
	{
		array[3] = '\0';
		array[4] = '\0';
	}
	else
	{
		array[3] = ',';
		array[4] = ' ';
	}
	array[5] = '\0';
}

void	ft_print_comb(void)
{
	char	combo[6];
	char	num1;
	char	num2;
	char	num3;

	num1 = 0;
	while (num1 <= 7)
	{
		num2 = num1 + 1;
		while (num2 <= 8)
		{
			num3 = num2 + 1;
			while (num3 <= 9)
			{
				add_num_to_array(combo, num1, num2, num3);
				write (1, combo, 5);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
