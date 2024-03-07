/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:13:49 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/14 16:36:45 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len_d ;
    while(*dest)
    {
        dest++;
        len_d++;
    }

    unsigned int len_s = 0; 
    while (*src)
    {
        src++;
        len_s++;
    }

    if(size == 0 || size < len_d)
        return (len_s + size);

    unsigned int s = 0;
    while(src[s] != '\0' && s < size - 1 - len_d )
    {
        *dest = src[s];
        dest++;
        s++;
    }

    *dest = '\0';
    return(len_s + len_d);
}

/*int main(void)
{
    char dest[20] = "Hello";
    char src[] = ", World!";
    unsigned int result = ft_strlcat(dest, src, 2);

    printf("Concatenated string: %s\n", dest);
    printf("Length of concatenated string: %u\n", result);

    return 0;
}*/
