/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 19:51:04 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 18:59:24 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_atoi(const char *nptr)
{
	int i;
	int sign;
	int nb;
	int count_sign;

	i = 0;
	sign = 1;
	nb = 0;
	count_sign = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t' ||
			nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
	{
		i++;
	}
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (count_sign++ > 0)
			return (0);
		if (nptr[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = (nb * 10) + nptr[i] - '0';
		i++;
	}
	return (nb * sign);
}
