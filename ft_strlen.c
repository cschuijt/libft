/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:37:56 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/08 20:57:27 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(const char *s)
{
	unsigned int	count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
