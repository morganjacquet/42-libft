/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 16:23:51 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/18 23:13:53 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destr;
	unsigned char	*srcr;

	i = 0;
	destr = (unsigned char*)dest;
	srcr = (unsigned char*)src;
	if (!n || dest == src)
		return (dest);
	while (i < n)
	{
		destr[i] = srcr[i];
		i++;
	}
	return (dest);
}
