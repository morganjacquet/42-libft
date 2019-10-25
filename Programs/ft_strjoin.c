/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/25 07:59:48 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/25 08:42:08 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*dest;

    if (!s1 || !s2)
		return (NULL);
	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dest == NULL)
		return (NULL);
    i = 0;
	while (s1[i] != "\0")
    {
        dest[i] = s1[i];
        i++;
    }
    while (s2[i] != "\0")
    {
        dest[i] = s2[i];
        i++;
    }
    dest[i] = "\0";
	return (dest);
}