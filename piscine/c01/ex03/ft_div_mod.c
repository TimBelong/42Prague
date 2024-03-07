/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:32:26 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/08 12:38:45 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int 	result;

// 	result = 0;

// 	int 	remainder;

// 	remainder = 0;
// 	printf("Before: %d %d\n", result, remainder);
// 	ft_div_mod(9,4, &result, &remainder);
// 	printf("Before: %d %d\n", result, remainder);
// 	return(0);
// }
