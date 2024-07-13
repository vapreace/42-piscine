/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 22:05:17 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/25 22:05:40 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	int	z;
	
	x = ft_str_is_numeric("012");
	y = ft_str_is_numeric("Hello");
	z = ft_str_is_numeric("");
	
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
}*/
