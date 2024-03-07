/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:33:50 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/14 12:01:51 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		s = str;
		t = to_find;
		while (*t != '\0' && *s == *t)
		{
			s++;
			t++;
		}
		if (*t == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
//     char *s1 = "Hello World!";
//     char *s2 = "as";

//     printf("%s\n", ft_strstr(s1, s2)); 
//     return 0; 
// }
