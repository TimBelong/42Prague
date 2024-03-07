/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:29:47 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/14 15:59:42 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0; 

	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char *str = "Take me to the church!";
// 	printf("%d", ft_strlen(str));
// 	return (0);
// }