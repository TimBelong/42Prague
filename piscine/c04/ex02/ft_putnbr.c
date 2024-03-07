/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:52:45 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/14 15:57:34 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
	char buffer[22];
    int i = 0;

    if (nb == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }


    if (nb == 0) {
        buffer[i++] = '0';
    }
    else {
        if (nb < 0) {
            write(1, "-", 1);  
            nb = -nb;  
        }

        while (nb > 0) {
            int digit = nb % 10;
            buffer[i++] = '0' + digit;
            nb /= 10;
        }

        int j = 0;
        while (j < i / 2) {
            char temp = buffer[j];
            buffer[j] = buffer[i - j - 1];
            buffer[i - j - 1] = temp;
            j++;
        }
    }

    write(1, buffer, i);
}

// int main(void)
// {
// 	int num = 1123213;
// 	ft_putnbr(num);
// 	return(0);
// }