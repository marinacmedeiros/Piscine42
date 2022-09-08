/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:51:54 by mamedeir          #+#    #+#             */
/*   Updated: 2022/07/24 11:34:14 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if (!(str[m] >= '0' && str[m] <= '9'))
			return (0);
		m++;
	}
	return (1);
}
