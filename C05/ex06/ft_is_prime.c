/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <isousa-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:39:56 by isousa-m          #+#    #+#             */
/*   Updated: 2023/08/06 05:16:35 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nb = atoi(argv[1]);
		int result = ft_is_prime(nb);
		printf("%d", result);
	}
}*/