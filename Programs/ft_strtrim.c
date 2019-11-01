/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/31 14:11:49 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/01 12:36:35 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_start_trim(char const *s1, char const *set)
{
	int i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	return (i);
}

static int		ft_strlen_trim(char const *s1, char const *set)
{
	int i;
	int count;

	i = ft_start_trim(s1, set);
	count = ft_strlen(&s1[i]);
	if (count != 0)
		while (s1[i + count - 1]
				&& ft_strchr(set, s1[i + count - 1]) != NULL)
			count--;
	return (count);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		len;
	int		start;
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen_trim(s1, set);
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	start = ft_start_trim(s1, set);
	i = 0;
	while (i != len)
	{
		dest[i] = s1[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
