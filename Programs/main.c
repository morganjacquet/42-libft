/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/25 06:17:22 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/25 08:40:16 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#define SUCCESS printf("\033[32m")
#define FAILED  printf("\033[31m")
#define NORMAL  printf("\033[1m")

void    print_strlcat(char *dst, char *src, size_t len)
{
    char *dst1, *dst2;
    dst1 = strdup(dst);
    dst2 = strdup(dst);
    (strlcat(dst1, src, len) == ft_strlcat(dst2, src, len)) ? SUCCESS : FAILED;
    printf("{%s, %s, %zu} = {%s, %s}", dst, src, len, dst1, dst2);
    NORMAL;
    free(dst1);
    free(dst2);
}

int main(int size, char **arg)
{
    if (size == 1 || !strcmp(arg[1], "ft_strlen"))
    {
	    printf("%s\n", ft_strjoin("bonjour", "toto"));
    }
    if (size == 1 || !strcmp(arg[1], "ft_substr"))
    {
	    printf("%s\n", ft_substr("bonjour toto", 5, 5));
    }
    if (size == 1 || !strcmp(arg[1], "ft_strlcat"))
    {
	    print_strlcat("Champignon rouge", " la chevre", 50);
    }
    return (0);
}