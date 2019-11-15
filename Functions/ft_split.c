/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/01 12:38:49 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 02:46:30 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		count_word(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i + 1] == '\0')
			count++;
		else if (s[i] != c && s[i + 1] == c)
			count++;
		i++;
	}
	return (count);
}

static int		count_letter(char const *dest, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (dest[i] == c)
		i++;
	while (dest[i] != c && dest[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}

static char		*free_split(char **dest, int i)
{
	while (i--)
	{
		free(dest[i]);
	}
	free(dest);
	return (NULL);
}

static char		**split_core(char **dest, char const *s, char c, int word)
{
	int i;
	int j;
	int	count;

	i = 0;
	count = 0;
	while (count < word)
	{
		j = 0;
		if (!(dest[count] = (char*)malloc(sizeof(char) *
									(count_letter(&s[i], c) + 1))))
		{
			free_split(dest, count - 1);
			return (NULL);
		}
		while (s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
			dest[count][j++] = s[i++];
		dest[count][j] = '\0';
		count++;
	}
	dest[count] = 0;
	return (dest);
}

char			**ft_split(char const *s, char c)
{
	char	**dest;
	int		word;

	if (s == NULL)
	{
		if (!(dest = malloc(sizeof(char *) * 1)))
			return (NULL);
		dest[0] = NULL;
		return (dest);
	}
	word = count_word(s, c);
	if (!(dest = malloc(sizeof(char *) * (word + 1))))
		return (NULL);
	if (word == 0)
	{
		dest[0] = NULL;
		return (dest);
	}
	if (!(split_core(dest, s, c, word)))
		return (NULL);
	return (dest);
}
