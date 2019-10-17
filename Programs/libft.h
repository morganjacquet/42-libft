/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 11:45:14 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 15:44:11 by mojacque    ###    #+. /#+    ###.fr     */
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

#endif
