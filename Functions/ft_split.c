/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/01 12:38:49 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/14 21:41:34 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(s[i] != '\0')
	{
		if(s[i] != c && s[i+1] != '\0')
			count++;
		else if(s[i] != c && s[i+1] == c)
			count++;
		i++;
	}
	return count;
}

static int	split_core(char **dest, char const *s, char c)
{
	int i;

	i = 0;
	while(s[i++] != '\0')
	{
		if (s[i] != c)
		{

		}
	}
}

char	**ft_split(char const *s, char c)
{
	char **dest;
	int count_word;

	if (s == NULL)
		return NULL;
	count_word = count_word(s, c);
	if (!(dest = malloc(sizeof(char *) * (count_word + 1))))
		return (NULL);
	if (!(split_core(dest, s, c)))
		return (NULL);
	return (dest);
}

int		main()
{
	ft_split("test.bonjour.ca va ?", '.');
}