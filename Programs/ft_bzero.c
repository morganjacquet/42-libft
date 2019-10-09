/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bzero.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 17:10:47 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 17:24:38 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

static void		*ft_memset(void *s, int c, int n)
{
	char *ptr;

	ptr = (char*)s;
	while (n-- > 0)
		*ptr++ = c;
	return (s);
}

void			ft_bzero(void *s, int n)
{
	ft_memset(s, 0, n);
}
