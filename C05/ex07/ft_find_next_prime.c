/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <isousa-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:18:56 by isousa-m          #+#    #+#             */
/*   Updated: 2023/08/06 05:16:43 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	while (i <= (nb / i))
	{
		if (nb % 2 == 0)
			return (0);
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	if (nb == 4)
		return (5);
	if (nb == 6)
		return (7);
	if (nb == 8)
		return (11);
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (!(ft_is_prime(nb)))
			nb++;
		return (nb);
	}
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nb = atoi(argv[1]);
		int result = ft_find_next_prime(nb);
		printf("%d", result);
	}
}*/
