#include <unistd.h>
#include <stdio.h>
#include <string.h>


// 1) Функция strcat - соединяет строки, Добавляя Null в конце. 

// char *ft_strcat(char *dest, char *src)
// {
//     while(*dest)
//     {
//         dest++;
//     }

//     while(*src)
//     {
//         *dest = *src;
//         src++;
//         dest++;
//     }
//     *dest = '\0';

//     return dest;
// }

// 2) Функция strncat - вставляет n количество символов из одной строки в другую. Закрывая вторую строку Null значением.

// char	*ft_strncat(char *dest, char *src, unsigned int nb)
// {
//     char *result = dest;

//     while(*dest)
//         dest++;
    
//     while (*src && nb > 0)
//     {
//         *dest = *src;
//         dest++;
//         src++;
//         nb--;
//     }
//     *dest = '\0';
//     return result;
    
// }

// 3) hello world, hello 42prague.
//          world
// char    *ft_strstr(char *str, char *to_find)
// {
//     if (*to_find == '\0')
//     {
//         return str;
//     }

//     while(*str != '0')
//     {
//         char    *s = str;
//         char    *t = to_find;
//         while(*t != '\0' && *s == *t)
//         {
//             s++;
//             t++;
//         }

//         if(*t == '\0')
//         {
//             return (str);
//         }
//         str++;
//     }
//     return NULL;
// }

// Функция strlcat - Функция strlcat копирует src в конец dest, но она не переписывает dest полностью, она добавляет к нему. Она гарантирует, что размер dest не превысит size - 1 символов, чтобы избежать переполнения буфера. Она всегда завершает результирующую строку нулевым символом.

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    int len_d = 0;
    while(*dest)
    {
        dest++;
        len_d++;
    }

    int len_s = 0; 
    while (*src)
    {
        src++;
        len_s++;
    }

    if(size == 0 || size < len_d)
        return (len_s + size);

    int s = 0;
    while(src[s] != '\0' && s < size - 1 - len_d )
    {
        *dest = src[s];
        dest++;
        s++;
    }

    *dest = '\0';
    return(len_s + len_d);
}

int main() {
    const char *haystack = "Hello, world!";
    const char *needle = "world";

    char *result = strstr(haystack, needle);

    if (result != NULL) {
        printf("Substring found at index: %ld\n", result - haystack);
    } else {
        printf("Substring not found.\n");
    }

    printf("Substring found at index: %ld\n", result - haystack);
    return 0;
}

