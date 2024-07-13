/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:40:55 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/25 23:59:01 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
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

	x = ft_str_is_uppercase("helloworld");
	y = ft_str_is_uppercase("HELLOWORLD");
	z = ft_str_is_uppercase("");

	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
}*/
