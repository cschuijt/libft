/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 15:43:57 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/09 16:08:34 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*((char *) s) == c)
			return ((void *) s);
		(char *) s++;
		n--;
	}
	return (NULL);
}
