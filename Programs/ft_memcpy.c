/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 16:23:51 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 18:23:31 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, void *src, int n)
{
	char *destr;
	char *srcr;

	destr = (char*)dest;
	srcr = (char*)src;
	while (n-- > 0)
		*destr++ = *srcr++;
	return (dest);
}
