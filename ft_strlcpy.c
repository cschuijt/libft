/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 14:29:58 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/10 15:02:40 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	len;

	len = ft_strlen(src);
	n = 0;
	while (*src && n < dstsize)
	{
		*dst = *src;
		dst++;
		src++;
		n++;
	}
	if (dstsize > 0)
		*dst = '\0';
	return (len);
}
