/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:50:54 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/19 12:14:57 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_factorial(int nb)
{
	int	result;

	if(nb < 0)
	{
		return (0);
	}
	result = 1;
	while (nb >= 1)
	{
		result *= nb;
		nb--;
	}
	return (result);	
}

/*int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}*/