/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_ultimate_div_mod.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:40:23 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/08 12:56:14 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_b;
	int	tmp_a;

	tmp_b = *b;
	tmp_a = *a;
	*a = tmp_a / tmp_b;
	*b = tmp_a % tmp_b;
}

// int	main(void)
// {
// 	int	a;

// 	a = 9;

// 	int	b;

// 	b = 4;

// 	printf("Before: %d %d\n", a, b);
//  	ft_ultimate_div_mod(&a,&b);
//  	printf("Before: %d %d\n", a, b);
// 	return (0);
// }
