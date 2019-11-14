/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/01 14:36:12 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/01 15:37:11 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_ilen(long nb)
{
	int		len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*dest;
	long	nb;
	int		i;

	nb = n;
	i = ft_ilen(nb);
	if ((dest = malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	dest[i--] = '\0';
	if (nb == 0)
	{
		dest[0] = 0 + '0';
		return (dest);
	}
	if (n < 0)
	{
		dest[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		dest[i--] = '0' + (nb % 10);
		nb = nb / 10;
	}
	return (dest);
}
