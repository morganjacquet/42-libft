/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/18 23:16:00 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/18 23:31:20 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destr;
	unsigned char	*srcr;

	i = 0;
	destr = (unsigned char*)dest;
	srcr = (unsigned char*)src;
	if (!n || dest == src)
		return (dest);
	if (srcr < destr)
	{
		while (n-- > 0)
			destr[n] = srcr[n];
	}
	else
	{
		while (i < n)
		{
			destr[i] = srcr[i];
			i++;
		}
	}
	return (dest);
}
