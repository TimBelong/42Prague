/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   : ft_fibonacci.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:36:53 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/19 13:40:38 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return -1;
    }
    if (index == 0)
    {
		return 0;
    }
    if (index == 1)
    {
		return 1;
    }

    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}