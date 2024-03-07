/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:19:32 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/19 12:25:17 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb ==1)
		return (1);
	else if (nb < 0)
		return (0);
	else 
		return nb * ft_recursive_factorial(nb - 1);
}

// int	main(void)
// {
// 	printf("%d", ft_recursive_factorial(5));
// 	return (0);
// }