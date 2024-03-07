/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:58:25 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/13 15:30:32 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	while(*dest)
    {
        dest++;
    }

    while(*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

    return dest;
}

/*int main(void)
{
    char *s1 = "World!";
    char s2[20] = "Hello ";


    printf("%s\n", ft_strcat(s2, s1)); // Use %d to print integers
    return 0; // Added a return statement
}*/
