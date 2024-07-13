/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:55:33 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/31 18:55:38 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
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

	x = ft_str_is_lowercase("helloworld");
	y = ft_str_is_lowercase("HELLOWORLD");
	z = ft_str_is_lowercase("");

	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
}*/
