/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 21:37:13 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/09 21:34:46 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_write_number(long i, char *str)
{
	*str = '0';
	while (i > 0)
	{
		*str = 48 + (i % 10);
		i = i / 10;
		str--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		negative;
	char	*str;
	long	i;

	negative = 0;
	if (n < 0)
		negative = 1;
	if (n < 0)
		i = (long) n * -1;
	else
		i = n;
	str = malloc(sizeof(char) * 12);
	if (!str)
		return (NULL);
	str = str + 11;
	*str = '\0';
	str--;
	str = ft_write_number(i, str);
	if (negative == 1)
		*str = '-';
	if (n == 0 || negative == 1)
		return (str);
	else
		return (str + 1);
}
