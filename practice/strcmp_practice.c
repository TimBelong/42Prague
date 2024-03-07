#include <unistd.h>
#include <stdio.h>


//1) Функция strcmp - сравнивает симвлы двух строк. 
//Как только функция находит два разных символа, она возвращает разницу этих символов. 
// int	ft_strcmp(char *s1, char *s2)
// {
//     while (*s1 && (*s1 == *s2))
//     {
//         s1++;
//         s2++;
//     }

//     return (unsigned char)*s1 - (unsigned char)*s2;
// }

// 2) Функция strncmp - функция которая проверяет n количество одной строки с другой. 

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

#include <stdio.h>
int main(void) {
	char *s1 = "wsda";
	char *s2 = "asds";

	printf("%d\n", ft_strcmp(s1, s2));
	return 0;
}