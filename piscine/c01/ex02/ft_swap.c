/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:20:35 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/08 12:30:05 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

// int	main(void)
// {	
// 	int	num1;

// 	num1 = 5;

// 	int	num2;

// 	num2 = 10;

// 	printf("Before: %d %d\n", num1, num2);
// 	ft_swap( &num1, &num2);
// 	printf("After: %d %d\n", num1, num2);
// 	return(0);
// }
