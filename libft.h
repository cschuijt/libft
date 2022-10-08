/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:44:15 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/08 20:33:29 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strnlen(char *s, size_t maxlen);
int		ft_atoi(char *s);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
#endif
