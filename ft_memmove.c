/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 17:59:15 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/09 18:59:40 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	move_rtl(void *dest, const void *src, size_t n)
{
	dest = (char *) dest + n - 1;
	src = (char *) src + n - 1;
	while (n > 0)
	{
		*((char *) dest) = *((char *) src);
		(char *) dest--;
		(char *) src--;
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*pnt;

	pnt = dest;
	if ((src + n - 1) > dest && src < dest)
		move_rtl(dest, src, n);
	else
	{
		while (n > 0)
		{
			*((char *) dest) = *((char *) src);
			(char *) dest++;
			(char *) src++;
			n--;
		}
	}
	return (pnt);
}
