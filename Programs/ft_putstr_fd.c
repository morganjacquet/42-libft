/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/17 11:35:48 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 22:51:40 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i++], 1);
	}
}
