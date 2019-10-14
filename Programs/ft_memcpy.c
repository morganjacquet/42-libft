/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 16:23:51 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/14 11:22:17 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *destr;
	char *srcr;

	destr = (char*)dest;
	srcr = (char*)src;
	while (n-- > 0)
		*destr++ = *srcr++;
	return (dest);
}
