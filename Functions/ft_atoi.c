/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 19:51:04 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/25 03:25:59 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_atoi(const char *nptr)
{
	int i;
	int sign;
	int nb;

	i = 0;
	nb = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t' ||
			nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		sign = nptr[i++];
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (nb > 469762049 && sign != '-')
			return (-1);
		else if (nb > 469762049 && sign == '-')
			return (0);
		nb = (nb * 10) + nptr[i] - '0';
		i++;
	}
	return ((sign == '-') ? -nb : nb);
}
