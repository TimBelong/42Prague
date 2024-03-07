/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:40:55 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/19 13:43:32 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>

 int ft_sqrt(int nb)
 {
	int	sqrt;

	sqrt = 0;
    while (sqrt * sqrt <= nb)
    {
        if (sqrt * sqrt == nb)
        {
            return sqrt;
        }
        sqrt++;
    }
    return (0);
 }