/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttulegal <ttulegal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:03:08 by ttulegal          #+#    #+#             */
/*   Updated: 2023/09/10 15:41:13 by ttulegal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

// int main() {
//     int arr[] = {5, 2, 9, 3, 1};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int i = 0, j;

//     ft_sort_int_tab(arr, size);

//     while (i < size) {
//         displayNumber(arr[i]);
//         i++;
//     }

//     return 0;
// }
