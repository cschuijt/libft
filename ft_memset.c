/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 13:16:53 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/10 12:00:13 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	void	*pnt;

	pnt = s;
	while (n > 0)
	{
		*((char *) pnt) = c;
		n--;
		pnt++;
	}
	return (s);
}
