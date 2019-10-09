/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 11:45:14 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 17:09:22 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalnum (int c);
int		ft_isalpha (int c);
int		ft_isascii (int c);
int		ft_isdigit (int c);
int		ft_isprint (int c);
int		ft_toupper (int c);
int		ft_tolower (int c);
size_t	ft_strlen (const char *s);
void	*ft_memset (void *s, int c, size_t n);
int		ft_atoi (const char *nptr);
void	ft_bzero (void *s, int n);

#endif
