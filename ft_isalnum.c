/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 16:33:34 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/08 20:33:50 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_isdigit(int c);
int	ft_isalpha(int c);

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (true);
	return (false);
}
