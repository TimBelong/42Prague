/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:59:52 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/19 13:09:39 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if(power == 0)
		return 1;
	if (nb == 0 && power == 0)
	{
		return 1;
	}
	return (nb * ft_recursive_power(nb, power -1));
}