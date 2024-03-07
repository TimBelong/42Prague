/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:11:25 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/14 14:13:21 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
    {
        if(*s1 == '\0' && *s2 == '\0')
            return 0;
        else if (*s1 != *s2)
            return *s1 - *s2;
        s1++;
        s2++;
        i++;
    }
    return 0;
}

/*int main(void)
{
    char *s1 = "Hello";
    char *s2 = "Hellasd";

    printf("%d\n", ft_strncmp(s1, s2,5)); // Use %d to print integers
    return 0; // Added a return statement
}*/
