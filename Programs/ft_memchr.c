/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/18 23:36:58 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 23:43:07 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*scrr;

	i = 0;
	if (s == NULL)
		return (NULL);
	scrr = (void *)s;
	while (i < n)
	{
		if (scrr[i] == (unsigned char)c)
			return (&scrr[i]);
		i++;
	}
	return (NULL);
}
