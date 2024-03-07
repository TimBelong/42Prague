/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:08:45 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/19 16:11:44 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
    {
		return (0);
    }
	while (i * i <= nb)
    {
		if (nb % i == 0)
        {
            return (0);
        }
        i++;
    }

    return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}

	return (nb);
}