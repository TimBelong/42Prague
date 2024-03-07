/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:33:54 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/14 15:47:47 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1,str,1);
		str++;
	}
}

// int	main(void)
// {
// 	char str[] = "Hello!";
// 	ft_putstr(str);
// 	return (0);
// }