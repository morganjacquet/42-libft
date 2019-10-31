/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/31 14:11:49 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/31 19:41:49 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strlen_trim(char const *s1, char const *set)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while (s1[i] != '\0')
	{
		
	}
	return (count);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*dest;

	if (s1 == NULL || set == NULL)
		return (NULL);
	dest = malloc(sizeof(char) * (ft_strlen_trim(s1, set) + 1));
	if (dest == NULL)
		return (NULL);
	
	return (dest);
}