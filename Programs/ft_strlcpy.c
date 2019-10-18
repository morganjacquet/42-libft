/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 13:36:45 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/18 21:57:06 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcpy(char *restrict dest, const char *restrict src, size_t size)
{
	unsigned int src_i;
	unsigned int i;

	if (size == 0)
		return (0);
	src_i = 0;
	while (src[src_i] != '\0')
	{
		++src_i;
	}
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_i);
}
