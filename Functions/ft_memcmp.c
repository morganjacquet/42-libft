/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/22 22:27:09 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 17:44:37 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*s1r;
	const unsigned char		*s2r;
	size_t					i;

	if (s1 == s2 || n == 0)
		return (0);
	s1r = (const unsigned char *)s1;
	s2r = (const unsigned char *)s2;
	i = 0;
	while (n-- > 0)
	{
		if (s1r[i] != s2r[i])
		{
			return (s1r[i] - s2r[i]);
		}
		i++;
	}
	return (0);
}
