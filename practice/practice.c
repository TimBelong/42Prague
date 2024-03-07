#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i = 0;
    while(*str)
    {   
        i++;
        str++;
    }
    return i;
}

// void ft_putnb(int nb)
// {
//     if(nb == -2147483648)
//     {
//         write(1, "-2147483648", 1);
//         return ;
//     }
//     if(nb < 0)
//     {
//         ft_putchar('-');
//         nb = -nb;
//     }
//     if(nb >= 10)
//         ft_putnb(nb / 10);
//     ft_putchar(nb % 10 + '0');
// }

// int	ft_atoi(const char *str)
// {
//     int num = 0;
//     int i = 0;
//     int parity = 0;

//     while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
//         i++;
//     while(str[i] == '-' || str[i] == '+')
//     {
//         if(str[i] == '-')
//             parity++;
//         i++;
//     }
//     while(str[i] >= '0' && str[i] <= '9')
//     {
//         num *= 10;
//         num += str[i] - '0';
//         i++;
//     }
//     if(!(parity % 2 == 0))
//         return (-num);

//     return (num);
// }

// int		check_double2(char *str, char c)
// {
// 	int i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] == c)
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

// int		check_double(char *str, char c, int pos)
// {
// 	int i;

// 	i = 0;
// 	while (i < pos)
// 	{
// 		if (str[i] == c)
// 			return (0);
// 		i++; 
// 	}
// 	return (1);
// }

// void ft_union(char *str, char *str1)
// {
//     int i = 0;
//     while (str[i] != '\0')
// 	{
// 		if (check_double(str, str[i], i) == 1)
// 			write(1, &str[i], 1);
// 		i++;
// 	}
//     i=0;

//     while(str1[i])
//     {
//         if(check_double2(str, str1[i]) == 1)
//         {
//              if(check_double(str, str[i], i) == 1)
//                 ft_putchar(str[i]);
//         }
//         i++;
//     }
// }

int main(void)
{
    int number;
    char *pnt;

    int k,bites;

    bites = (int)sizeof(int);

    pnt =(char*)&number;

    for(k = 1; k <= bites; k++)
    {
        *pnt = 1;

        pnt++;
    }

    printf("Значение переменной: %d\n", number);

    number = 0;

    pnt -= bites - 1;

    *pnt = 2;

    printf("Значение переменной: %d\n", number);
  
    return 0;
}
