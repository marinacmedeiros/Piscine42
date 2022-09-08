/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:47:38 by mamedeir          #+#    #+#             */
/*   Updated: 2022/07/24 11:33:21 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if (!(str[m] >= 'A' && str[m] <= 'Z')
			&& !(str[m] >= 'a' && str [m] <= 'z'))
			return (0);
		m++;
	}
	return (1);
}
