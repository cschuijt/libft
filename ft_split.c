/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 21:00:11 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/14 11:53:59 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size);

static void	free_everything(char **array)
{
	unsigned int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static unsigned int	count_strings(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (i);
}

static char	*allocate_substring(char const *s, char c)
{
	int		len;
	char	*str;
	int		i;

	len = 0;
	i = 0;
	while (s[len] && s[len] != c)
		len++;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	array = ft_calloc(sizeof(char *), (count_strings(s, c) + 1));
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			array[i] = allocate_substring(s, c);
			if (array[i] == NULL)
			{
				free_everything(array);
				return (NULL);
			}
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	array[i] = NULL;
	return (array);
}
