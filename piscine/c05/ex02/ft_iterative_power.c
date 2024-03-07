/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   : ft_iterative_power.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:53:48 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/19 12:59:25 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int result;
	int	i;

	result = 1;
	i = 0;
	if (power < 0)
	{
		return 0;
	}
	if (nb == 0 && power == 0)
	{
		return 1;
	}
	while (i < power)
	{
		result *=nb;
		i++;
	}
	return (result);
}
