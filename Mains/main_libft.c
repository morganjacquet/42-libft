/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main_libft.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 14:46:37 by dgascon      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 01:29:25 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

#define SUCCESS printf("\033[32m")
#define FAILED printf("\033[31m")
#define NORMAL printf("\033[0m")
#define UNKNOWN printf("\033[33m")

void	print_memset(void *dst, int val, size_t len)
{
	char *dst1, *dst2;
	dst1 = ft_strdup(dst);
	dst2 = ft_strdup(dst);
	memset(dst1, val, len);
	ft_memset(dst2, val, len);
	(strcmp(dst1, dst2) == 0) ? SUCCESS : FAILED;
	printf("\n\t{%s, %c, %zu} = {%s, %s}", dst, val, len, dst1, dst2);
	NORMAL;
	free(dst1);
	free(dst2);
}

void	print_bzero(char *dst, size_t len)
{
	char *dst1, *dst2;
	dst1 = ft_strdup(dst);
	dst2 = ft_strdup(dst);
	bzero(dst1, len);
	ft_bzero(dst2, len);
	(strcmp(dst1, dst2) == 0) ? SUCCESS : FAILED;
	printf("\n\t{%s, %zu} = {%s, %s}", dst, len, dst1, dst2);
	NORMAL;
	free(dst1);
	free(dst2);
}

void	print_memcpy(char *dst, char *src, size_t len)
{
	char *dst1, *dst2;
	dst1 = ft_strdup(dst);
	dst2 = ft_strdup(dst);
	memcpy(dst1, src, len);
	ft_memcpy(dst2, src, len);
	(strcmp(dst1, dst2) == 0) ? SUCCESS : FAILED;
	printf("\n\t{%s, %s, %zu} = {%s, %s}", dst, src, len, dst1, dst2);
	NORMAL;
	free(dst1);
	free(dst2);
}

void	print_memccpy(char *dst, char *src, int c, size_t len)
{
	char *dst1, *dst2;
	dst1 = ft_strdup(dst);
	dst2 = ft_strdup(dst);
	memccpy(dst1, src, c, len);
	ft_memccpy(dst2, src, c, len);
	(strcmp(dst1, dst2) == 0) ? SUCCESS : FAILED;
	printf("\n\t{%s, %s, %c, %zu} = {%s, %s}", dst, src, c, len, dst1, dst2);
	NORMAL;
	free(dst1);
	free(dst2);
}

void	print_memmove(char *dst, char *src, size_t len)
{
	char *dst1, *dst2;
	dst1 = ft_strdup(dst);
	dst2 = ft_strdup(dst);

	dst1 = memmove(dst1, src, len);
	dst2 = ft_memmove(dst2, src, len);
	(!strcmp(dst1, dst2)) ? SUCCESS : FAILED;
	printf("\n\t{%s, %s, %zu} = {%s, %s}", dst, src, len, dst1, dst2);
	NORMAL;
	free(dst1);
	free(dst2);
}

void	print_memchr(char *dst, int c, size_t len)
{
	char *dst1, *dst2;
	dst1 = ft_strdup(dst);
	dst2 = ft_strdup(dst);
	memchr(dst1, c, len);
	ft_memchr(dst2, c, len);
	((dst1 == 0 && dst2 == 0) || !strcmp(dst1, dst2)) ? SUCCESS : FAILED;
	printf("\n\t{%s, %c, %zu} = {%s, %s}", dst, c, len, dst1, dst2);
	NORMAL;
	free(dst1);
	free(dst2);
}

void	print_memcmp(char *dst, char *src, size_t len)
{
	int n1 = memcmp(dst, src, len);
	int n2 = ft_memcmp(dst, src, len);
	(n1 == n2) ? SUCCESS : FAILED;
	printf("\n\t{%s, %s, %zu} = {%d, %d}", dst, src, len, n1, n2);
	NORMAL;
}

void	print_strlen(char *ts1)
{
	(strlen(ts1) == ft_strlen(ts1)) ? SUCCESS : FAILED;
	printf("\n\t{%s}", ts1);
	NORMAL;
}

void	print_isalpha(char c1)
{
	(isalpha(c1) == ft_isalpha(c1)) ? SUCCESS : FAILED;
	printf("\n\t{%c}", c1);
	NORMAL;
}

void	print_isdigit(char c1)
{
	(isdigit(c1) == ft_isdigit(c1)) ? SUCCESS : FAILED;
	printf("\n\t{%c}", c1);
	NORMAL;
}

void	print_isalnum(char c1)
{
	(isalnum(c1) == ft_isalnum(c1)) ? SUCCESS : FAILED;
	printf("\n\t{%c}", c1);
	NORMAL;
}

void	print_isascii(char c1)
{
	(isascii(c1) == ft_isascii(c1)) ? SUCCESS : FAILED;
	printf("\n\t{%c}", c1);
	NORMAL;
}

void	print_isprint(char c1)
{
	(isprint(c1) == ft_isprint(c1)) ? SUCCESS : FAILED;
	printf("\n\t{%c}", c1);
	NORMAL;
}

void	print_toupper(char c1)
{
	(toupper(c1) == ft_toupper(c1)) ? SUCCESS : FAILED;
	printf("\n\t{%c}", c1);
	NORMAL;

}

void	print_tolower(char c1)
{
	(tolower(c1) == ft_tolower(c1)) ? SUCCESS : FAILED;
	printf("\n\t{%c}", c1);
	NORMAL;
}

void	print_strchr(char *dst, int c)
{
	char *dst1, *dst2;
	dst1 = ft_strdup(dst);
	dst2 = ft_strdup(dst);
	strchr(dst1, c);
	ft_strchr(dst2, c);
	((dst1 == 0 && dst2 == 0) || !strcmp(dst1, dst2)) ? SUCCESS : FAILED;
	printf("\n\t{%s, %c} = {%s, %s}", dst, c, dst1, dst2);
	NORMAL;
	free(dst1);
	free(dst2);
}

void	print_strrchr(char *dst, int c)
{
	char *dst1, *dst2;
	dst1 = ft_strdup(dst);
	dst2 = ft_strdup(dst);
	strrchr(dst1, c);
	ft_strrchr(dst2, c);
	((!dst1 && !dst2) || !strcmp(dst1, dst2)) ? SUCCESS : FAILED;
	printf("\n\t{%s, %c} = {%s, %s}", dst, c, dst1, dst2);
	NORMAL;
	free(dst1);
	free(dst2);
}

void	print_strncmp(char *dst, char *src, size_t len)
{
	int n1 = strncmp(dst, src, len);
	int n2 = ft_strncmp(dst, src, len);
	(n1 == n2) ? SUCCESS : FAILED;
	printf("\n\t{%s, %s, %zu} = {%d, %d}", dst, src, len, n1, n2);
	NORMAL;
}

void	print_strlcpy(char *dst, const char *src, size_t len)
{
	char *dst1, *dst2;
	dst1 = ft_strdup(dst);
	dst2 = ft_strdup(dst);
	(strlcpy(dst1, src, len) == (unsigned long)ft_strlcpy(dst2, src, len)) ? SUCCESS : FAILED;
	printf("\n\t{%s, %s, %zu} = {%s, %s}", dst, src, len, dst1, dst2);
	NORMAL;
	free(dst1);
	free(dst2);
}

void	print_strlcat(char *dst, const char *src, size_t len)
{
	char *dst1, *dst2;
	dst1 = ft_strdup(dst);
	dst2 = ft_strdup(dst);
	size_t t1, t2;
	t1 = t2 = 0;
	t1 = strlcat(dst1, src, len);
	t2 = ft_strlcat(dst2, src, len);
	(t1 == t2) ? SUCCESS : FAILED;
	printf("\n\t{%s, %s, %zu} = {%s, %s, %zu, %zu}", dst, src, len, dst1, dst2, t1, t2);
	NORMAL;
	free(dst1);
	free(dst2);
}

void	print_strnstr(char *haystack, char *needle, size_t len)
{
	char *dst1, *dst2;
	dst1 = ft_strdup(haystack);
	dst2 = ft_strdup(haystack);
	char *ts1 = strnstr(dst1, needle, len);
	char *ts2 = ft_strnstr(dst2, needle, len);
	(ts1 == ts2) ? SUCCESS : FAILED;
	printf("\n\t{%s, %s, %zu} = {%s, %s}", haystack, needle, len, ts1, ts2);
	NORMAL;
	free(dst1);
	free(dst2);
	free(ts1);
	free(ts2);
}

void	print_atoi(char *s1)
{
	int a1 = atoi(s1);
	int a2 = ft_atoi(s1);
	(a1 == a2) ? SUCCESS : FAILED;
	printf("\n\t{%s} = {%d, %d}", s1, a1, a2);
	NORMAL;
}

void	print_calloc(size_t count, size_t size)
{
	char *str1 = calloc(count, size);
	char *str2 = ft_calloc(count, size);
	ft_memset(str1, 'A', count);
	ft_memset(str2, 'A', count);
	(ft_strlen(str1) == ft_strlen(str2)) ? SUCCESS : FAILED;
	printf("\n\t{%zu, %zu} = {%s, %s}", count, size, str1, str2);
	NORMAL;
	free(str1);
	free(str2);
}

void	print_strdup(char *s1)
{
	char *dst1, *dst2;
	dst1 = strdup(s1);
	dst2 = ft_strdup(s1);

	(strcmp(dst1, dst2) == 0) ? SUCCESS : FAILED;
	printf("\n\t{%s} = {%s, %s}", s1, dst1, dst2);
	NORMAL;
	free(dst1);
	free(dst2);
}

void	print_split(char *s, char c)
{
	char **ptr = ft_split(s, c);
	printf("\n\t{%s, %c} = {", s, c);
	int i;

	i = 0;
	while (ptr[i])
	{
		printf("\"%s\"", ptr[i]);
		(ptr[i + 1]) ? printf(", ") : 0;
		i++;
	}
	printf("}");
	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

char	f_strmapi(unsigned int i, char c)
{
	(void) i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if(c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

void	*f_map(void *s)
{
	return (ft_strdup(s));
}

int		main(int size, char **arg)
{
	{ 	// Partie 1
		if (size == 1 || !strcmp(arg[1], "p1"))
			printf("\n\n\n\t\t Partie 1 \t\t");
		if (size == 1 || !strcmp(arg[1], "ft_memset") || !strcmp(arg[1], "p1"))
		{	printf("\nMemset : ");
			char str[] = "Sweet dream Pitch";
			print_memset(str, 'x', 20);
			print_memset(str + 3, '@', 1);
			print_memset(str + 8, '~', 0);
		}
		if (size == 1 || !strcmp(arg[1], "ft_bzero") || !strcmp(arg[1], "p1"))
		{	printf("\nBzero : ");
			print_bzero("You are so beautiful !", 3);
			print_bzero("The 100", 0);
		}
		if (size == 1 || !strcmp(arg[1], "ft_memcpy") || !strcmp(arg[1], "p1"))
		{	printf("\nMemcpy : ");
			print_memcpy("One baby", "Billions", 4);
			print_memcpy("King Charles", "Ecole 42", 0);
		}
		if (size == 1 || !strcmp(arg[1], "ft_memccpy") || !strcmp(arg[1], "p1"))
		{	printf("\nMemccpy : ");
			print_memccpy("L'elite des poneys", "Mystiques '\200Secte de poisson", 0600, 21);
			print_memccpy("Virulent pitres", "Mart\0eau champignons pins !", '\0', 10);
		}
		if (size == 1 || !strcmp(arg[1], "ft_memmove") || !strcmp(arg[1], "p1"))
		{	printf("\nMemmove : ");
			char *str1 = "Melon Pan";
			char *str2 = "Pantalon rouge";
			print_memmove(str1, str1 + 3, 5);
			print_memmove(str2, str2 + 6, 5);
		}
		if (size == 1 || !strcmp(arg[1], "ft_memchr") || !strcmp(arg[1], "p1"))
		{	printf("\nMemchr : ");
			print_memchr("Wingardium leviosa", 'g', 8);
			print_memchr("Circule, avant que je te bouscule !", '!', 35);
			print_memchr("Ça, c’est ce que j’appelle un poulet Mongol.", 'a', 0);
		}
		if (size == 1 || !strcmp(arg[1], "ft_memcmp") || !strcmp(arg[1], "p1"))
		{	printf("\nMemcmp : ");
			print_memcmp("Et moi, je suis Yaho, roi des costauds !", "Et moi, je suis une chèvre ?", 7);
			print_memcmp("Les Huns, on va s’en faire quelques uns !", "les Huns, sont vert !", 0);
			print_memcmp("On s’arrache la vache !", "Couché la noiraude !", 20);
		}
		if (size == 1 || !strcmp(arg[1], "ft_strlen") || !strcmp(arg[1], "p1"))
		{	printf("\nstrlen  : ");
			print_strlen("Pikachu");
			print_strlen("Mario");
			print_strlen("Vil\0ain");
		}
		if (size == 1 || !strcmp(arg[1], "ft_isalpha") || !strcmp(arg[1], "p1"))
		{	printf("\nisAlpha : ");
			print_isalpha('A');
			print_isalpha('7');
			print_isalpha('Z');
		}
		if (size == 1 || !strcmp(arg[1], "ft_isdigit") || !strcmp(arg[1], "p1"))
		{	printf("\nisDigit : ");
			print_isdigit('5');
			print_isdigit('9');
			print_isdigit('Z');
		}
		if (size == 1 || !strcmp(arg[1], "ft_isalnum") || !strcmp(arg[1], "p1"))
		{	printf("\nisAlnum: ");
			print_isalnum('0');
			print_isalnum('D');
			print_isalnum('4');
		}
		if (size == 1 || !strcmp(arg[1], "ft_isascii") || !strcmp(arg[1], "p1"))
		{	printf("\nisAscii: ");
			print_isascii('}');
			print_isascii('9');
			print_isascii('@');
		}
		if (size == 1 || !strcmp(arg[1], "ft_isprint") || !strcmp(arg[1], "p1"))
		{	printf("\nisPrint: ");
			print_isprint('~');
			print_isprint('9');
			print_isprint('x');
		}
		if (size == 1 || !strcmp(arg[1], "ft_toupper") || !strcmp(arg[1], "p1"))
		{	printf("\ntoUpper : ");
			print_toupper('a');
			print_toupper('d');
			print_toupper('z');
		}
		if (size == 1 || !strcmp(arg[1], "ft_tolower") || !strcmp(arg[1], "p1"))
		{	printf("\ntoLower : ");
			print_tolower('A');
			print_tolower('D');
			print_tolower('Z');
		}
		if (size == 1 || !strcmp(arg[1], "ft_strchr") || !strcmp(arg[1], "p1"))
		{	printf("\nStrchr : ");
			print_strchr("C’est pas faux !", 'p');
			print_strchr("Vous ne passerez pas !", 'V');
			print_strchr("La mort est une journée qui mérite d’être vécue.", 'm');
		}
		if (size == 1 || !strcmp(arg[1], "ft_strrchr") || !strcmp(arg[1], "p1"))
		{	printf("\nStrrchr : ");
			print_strrchr("On se shooterait à la vitamine C si cela avait été illégal...", 'C');
			print_strrchr("Blood must have blood.", 'a');
			print_strrchr("Quand on est vivant on répond au téléphone !", 'v');
		}
		if (size == 1 || !strcmp(arg[1], "ft_strncmp") || !strcmp(arg[1], "p1"))
		{	printf("\nStrncmp : ");
			print_strncmp("Il a une biche", "Il a une belle tête de vainqueur.", 7);
			print_strncmp("Nous ne sommes qu’ombres et poussières.", "Nous ne sommes pas des poissons, ok ?", 0);
			print_strncmp("Je suis dans une merde internationnale !", "Je suis dans le caca", 20);
			print_strncmp("arthur est vraiment un bon codeur LOL", "arthur est vraiment un bon codeur LO", ft_strlen("arthur est vraiment un bon codeur LOL"));
		}
		if (size == 1 || !strcmp(arg[1], "ft_strlcpy") || !strcmp(arg[1], "p1"))
		{ 	printf("\nStrlcpy : ");
			print_strlcpy("My hero's academia", "Death Note", 3);
			print_strlcpy("Seven Deadly Sins", "the raising shield", 3);
			print_strlcpy("Erased", "Elfen lied", 0);
		}
		if (size == 1 || !strcmp(arg[1], "ft_strlcat") || !strcmp(arg[1], "p1"))
		{	printf("\nStrlcat : ");
			char dst[] = "rrrrrrrrrrrrrrr";
			print_strlcat(dst, "lorem ipsum dolor sit amet", 5);
			print_strlcat("Venise Bracelei", "or Melody", 1);
			print_strlcat("Verinaze      ", "Bailando", 12);
			print_strlcat("Luigi", "Mario", 0);
		}
		if (size == 1 || !strcmp(arg[1], "ft_strnstr") || !strcmp(arg[1], "p1"))
		{	printf("\nStrnstr : ");
			print_strnstr("Lorem ipsum", "ipsum", 10);
			print_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
			print_strnstr("Verinaze", "Bailando", 0);
		}
		if (size == 1 || !strcmp(arg[1], "ft_atoi") || !strcmp(arg[1], "p1"))
		{	printf("\nAtoi : ");
			print_atoi("  +213");
			print_atoi("-456");
			print_atoi("  +-6523");
			print_atoi("-9223372036854775808");
			print_atoi("-99999999999999999999999999");
			print_atoi("99999999999999999999999999");
			print_atoi("2147483648");
		}
		if (size == 1 || !strcmp(arg[1], "ft_calloc") || !strcmp(arg[1], "p1"))
		{	printf("\nCalloc : ");
			print_calloc(5, 4);
			print_calloc(10, 6);
		}
		if (size == 1 || !strcmp(arg[1], "ft_strdup") || !strcmp(arg[1], "p1"))
		{	printf("\nStrdup : ");
			print_strdup("We are Angels");
			print_strdup("Gluant, mais appetissant !");
		}
	}
	{	// Partie 2
		if (size == 1 || !strcmp(arg[1], "p2"))
			printf("\n\n\n\t\t Partie 2 \t\t");
		if (size == 1 || !strcmp(arg[1], "ft_substr") || !strcmp(arg[1], "p2"))
		{	printf("\nSubstr :");
			UNKNOWN;
			char *str;
			printf("\n\t{%s, %d, %d} = {%s}", "Max birds chante avec un oiseau", 10, 7, str = ft_substr("Max birds chante avec un oiseau", 10, 7));
			free(str);
			printf("\n\t{%s, %d, %d} = {%s}", "Marilyn à la piscine", 4, 10, str = ft_substr("Marilyn à la piscine", 4, 10));
			free(str);
			NORMAL;
		}
		if (size == 1 || !strcmp(arg[1], "ft_strjoin") || !strcmp(arg[1], "p2"))
		{	printf("\nStrjoin :");
			UNKNOWN;
			char *str;
			printf("\n\t{%s, %s} = {%s}", "Jiraya", " le cochon", str = ft_strjoin("Jiraya", " le cochon"));
			free(str);
			printf("\n\t{%s, %s} = {%s}", "Raichu", " ou Pikachu", str = ft_strjoin("Raichu", " ou Pikachu"));
			free(str);
			printf("\n\t{%s, %s} = {%s}", "NULL", "Only S2", str = ft_strjoin(0, "Only S2"));
			printf("\n\t{%s, %s} = {%s}", "Only S1", "NULL", str = ft_strjoin("Only S1", 0));
			NORMAL;
		}
		if (size == 1 || !strcmp(arg[1], "ft_strtrim") || !strcmp(arg[1], "p2"))
		{	printf("\nStrtrim :");
			UNKNOWN;
			char *str;
			printf("\n\t{%s, %s} = {%s}", "le serpent est bleu", "leu", str = ft_strtrim("le serpent est bleu", "leu"));
			free(str);
			printf("\n\t{%s, %s} = {%s}", "Miguel le chomeur \t!", "Mr \t!", str = ft_strtrim("Miguel le chomeur \t!", "Mr \t!"));
			free(str);
			printf("\n\t{%s, %s} = {%s}", "\t \t   \t\t\t\t", "\t ", str = ft_strtrim("\t \t   \t\t\t\t", "\t "));
			free(str);
			NORMAL;
		}
		if (size == 1 || !strcmp(arg[1], "ft_split") || !strcmp(arg[1], "p2"))
		{	printf("\nSplit :");
			UNKNOWN;
			print_split("Les ch'ti a mon cul", ' ');
			print_split("Lamasticot", 'a');
			print_split("      split       this for   me  !       ", ' ');
			NORMAL;
		}
		if (size == 1 || !strcmp(arg[1], "ft_itoa") || !strcmp(arg[1], "p2"))
		{	printf("\nItoa : ");
			UNKNOWN;
			char *str;
			printf("\n\t{%d} = {%s}", -6789, str = ft_itoa(-6789));
			free(str);
			printf("\n\t{%d} = {%s}", 6789, str = ft_itoa(6789));
			free(str);
			printf("\n\t{%d} = {%s}", -2147483647 -1, str = ft_itoa(-2147483648));
			free(str);
			NORMAL;
		}
		if (size == 1 || !strcmp(arg[1], "ft_strmapi") || !strcmp(arg[1], "p2"))
		{	printf("\nStrmapi : ");
			UNKNOWN;
			char *str;
			printf("\n\t{%s} = {%s}", "One plus 6", str = ft_strmapi("One plus 6", f_strmapi));
			free(str);
			printf("\n\t{%s} = {%s}", "Prenez un chewing gum Emile.", str = ft_strmapi("Prenez un chewing gum Emile.", f_strmapi));
			free(str);
			NORMAL;
		}
		if (size == 1 || !strcmp(arg[1], "ft_putchar_fd") || !strcmp(arg[1], "p2"))
		{	printf("\nft_putchar_fd : ");
			UNKNOWN;
			printf("\n");
			ft_putchar_fd('\t', 1);
			ft_putchar_fd('x', 1);
			ft_putchar_fd('\n', 1);
			ft_putchar_fd('\t', 1);
			ft_putchar_fd('3', 1);
			ft_putchar_fd('\n', 1);
			ft_putchar_fd('\t', 1);
			ft_putchar_fd('#', 1);
			NORMAL;
		}
		if (size == 1 || !strcmp(arg[1], "ft_putstr_fd") || !strcmp(arg[1], "p2"))
		{	printf("\nft_putstr_fd : ");
			UNKNOWN;
			printf("\n");
			ft_putchar_fd('\t', 1);
			ft_putstr_fd("Leeloo Dallas Multipass !", 1);
			ft_putchar_fd('\n', 1);
			ft_putchar_fd('\t', 1);
			ft_putstr_fd("Merci la gueuse. Tu es un laideron mais tu es bien bonne.", 1);
			ft_putchar_fd('\n', 1);
			ft_putchar_fd('\t', 1);
			ft_putstr_fd("Sssplendide !", 1);
			NORMAL;
		}
		if (size == 1 || !strcmp(arg[1], "ft_putendl_fd") || !strcmp(arg[1], "p2"))
		{	printf("\nft_putendl_fd : ");
			UNKNOWN;
			printf("\n");
			ft_putchar_fd('\t', 1);
			ft_putendl_fd("Ou tu sors ou je te sors...", 1);
			ft_putchar_fd('\t', 1);
			ft_putendl_fd("Je ne crois pas qu'il y ait de bonne ou de mauvaise situation", 1);
			ft_putchar_fd('\t', 1);
			ft_putendl_fd("C'est fin, c'est très fin, ça se mange sans faim.", 1);
			NORMAL;
		}
		if (size == 1 || !strcmp(arg[1], "ft_putnbr_fd") || !strcmp(arg[1], "p2"))
		{	printf("\nft_putnbr_fd : ");
			UNKNOWN;
			printf("\n");
			ft_putchar_fd('\t', 1);
			ft_putnbr_fd(1234, 1);
			ft_putchar_fd('\n', 1);
			ft_putchar_fd('\t', 1);
			ft_putnbr_fd(-456789, 1);
			ft_putchar_fd('\n', 1);
			ft_putchar_fd('\t', 1);
			ft_putnbr_fd(-2147483648, 1);
			NORMAL;
		}
	}
	return (0);
}
