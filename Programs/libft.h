/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 11:45:14 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/25 08:00:27 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

void	*ft_memset (void *s, int c, size_t n);
void	ft_bzero (void *s, int n);
void	*ft_memcpy (void *dest, const void *src, size_t n);
int		ft_isalnum (int c);
int		ft_isalpha (int c);
int		ft_isascii (int c);
int		ft_isdigit (int c);
int		ft_isprint (int c);
int		ft_toupper (int c);
int		ft_tolower (int c);
size_t	ft_strlen (const char *s);
int		ft_atoi (const char *nptr);
int		ft_strncmp (const char *s1, const char *s2, size_t n);
int		ft_strlcpy(char *restrict dst, const char *restrict src, size_t size);
char	*ft_strdup (const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_calloc (size_t nmemb, size_t size);
void	*ft_memccpy (void *dest, const void *src, int c, size_t n);
void	*ft_memmove (void *dest, const void *src, size_t n);
void	*ft_memchr (const void *s, int c, size_t n);
int		ft_memcmp (const void *s1, const void *s2, size_t n);
char	*ft_strchr (const char *s, int c);
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
char	*ft_strnstr(const char	*big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
