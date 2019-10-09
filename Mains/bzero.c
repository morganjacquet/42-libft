#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore bzero(): %s\n", str);
    bzero(str, 8);
    printf("After bzero():  %s", str);

    char str_ft[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore ft_bzero(): %s\n", str_ft);
    ft_bzero(str_ft, 8);
    printf("After ft_bzero():  %s", str_ft);
}