/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 13:54:42 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/08 21:30:07 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	total_length;
	char			*pointer;
	unsigned int	i;

	total_length = ft_strlen(s);
	while (start > 0 && *s)
	{
		s++;
		start--;
	}
	if ((total_length - start) < len)
		len = (total_length - start);
	pointer = malloc(sizeof(char) * (len + 1));
	if (pointer == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		pointer[i] = s[i];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
