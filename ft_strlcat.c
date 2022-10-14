/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 14:28:09 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/14 11:22:53 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	len;

	n = 0;
	len = ft_strlen(dst) + ft_strlen(src);
	while (*dst)
	{
		if (n == dstsize)
			return (ft_strlen(src) + dstsize);
		dst++;
		n++;
	}
	while (n < (dstsize - 1) && *src)
	{
		*dst = *src;
		dst++;
		src++;
		n++;
	}
	*dst = 0;
	return (len);
}
