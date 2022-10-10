/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 14:28:09 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/10 15:06:04 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	len;

	len = ft_strlen(src) + ft_strlen(dst);
	n = 0;
	while (*dst)
	{
		dst++;
		n++;
	}
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
