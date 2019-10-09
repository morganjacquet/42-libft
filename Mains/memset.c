#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);
    memset(str, '.', 8);
    printf("After memset():  %s", str);

    char str_ft[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore ft_memset(): %s\n", str_ft);
    ft_memset(str_ft, '.', 8);
    printf("After ft_memset():  %s", str_ft);
}