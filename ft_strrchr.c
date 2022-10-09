/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 11:28:03 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/09 11:42:12 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	s = s + i;
	while (i > 0)
	{
		if (*s == c)
			return ((char *) s);
		s--;
		i--;
	}
	if (c == *s)
		return ((char *) s);
	else
		return (NULL);
}
