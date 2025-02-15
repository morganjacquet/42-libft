/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isalnum.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:44:43 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 10:37:15 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' & c <= 'z') ||
			(c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
