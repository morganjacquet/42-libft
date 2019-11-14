/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/25 03:25:25 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/25 03:53:05 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*strr;

	strr = (char *)s + ft_strlen(s);
	while (*strr != c)
	{
		if (strr == s)
			return (NULL);
		strr--;
	}
	return (strr);
}
