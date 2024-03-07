#include <unistd.h>
#include <stdio.h>


//1) strcpy - функция, которая копирует строку src в строку dest. После окончания копирования, 
//она добавляет Null значение в конец строки dest. Строка dest должна быть иметь достаточную вместимость для копирования. 
// char    *ft_strcpy(char *dest, char *src)
// {
//     while (*src)
//     {
//         *dest = *src;
//         src++;
//         dest++;
//     }
//     *dest = '\0';

//     return dest;
// }

//2) strncpy - функция, которая копирует n символов из строки src в строку dest. Если среди первых n байт нет 
//нулевого байта src строка помещенная в dest не будет завершаться на Null. Если длина src меньше n, 
//функция добавит недостоющие количетсво символов в виде Null

// char    *ft_strncpy(char *dest, char *src, unsigned int n)
// {
//     unsigned i = 0;

//     while (i < n && *src)
//     {
//         *dest = *src;
//         i++;
//         src++;
//         dest++;
//     }
//     while(i < n){
//         *dest = '\0';
//         dest++;
//         i++;
//     }
//     return dest;
// }

// 3) strlcpy - функция которая копирует size - 1 количество символов из одной строки в другую. 
//Но, в отличие от strncpy всегда закрывает dest строку Null значением. 
//Так же, строка возвращает количество символов  строке dest.
// unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
// {
//     unsigned   int counter = 0;
//     unsigned  int  i;

//     i = 0;
//     if (size != 0)
//     {
//         while (i < size - 1 && *src)
//         {
//             dest[i] = *src;
//             i++;
//             src++;
//         }
//         dest[i] = '\0';
//     }

//      while(*dest)
//     {
//         dest++;
//         counter++;
//     }
//     return (counter);
// }

int main(void)
{
   char    src[] = "Hello, World!";
    char    dest[10] = "";
    unsigned n = 5;

    //ft_strcpy(dest,src);
    //ft_strncpy(dest, src, 7);
    //unsigned int result = ft_strlcpy(dest, src, 10);

    printf("%s\n",dest);

    return 0;
}