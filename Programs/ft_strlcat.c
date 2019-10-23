/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/23 23:10:57 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 23:34:12 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	destl;
	size_t	srcl;

	if (size == 0)
		return (0);
	i = 0;
	destl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (size - 1 <= destl)
		return (srcl + size);
	while (destl + i < size - 1)
	{
		dst[destl + i] = src[i];
		i++;
	}
	dst[destl + i] = '\0';
	return (destl + srcl);
}
