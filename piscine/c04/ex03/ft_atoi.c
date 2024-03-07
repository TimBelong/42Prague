/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:58:56 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/14 15:59:20 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_spaces(char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	return (str);
}

char	*ft_plusminus(char *str, int *parity)
{
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			(*parity)++;
		}
		str++;
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int		parity;
	int		number;
	char	*numberstring;

	numberstring = ft_spaces(str);
	parity = 0;
	number = 0;
	numberstring = ft_plusminus(numberstring, &parity);
	while (*numberstring >= 48 && *numberstring <= 57)
	{
		number *= 10;
		number += *numberstring - 48;
		numberstring++;
	}
	if (!(parity % 2))
	{
		return (number);
	}
	return (-number);
}