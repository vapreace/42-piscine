/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <isousa-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 23:11:27 by isousa-m          #+#    #+#             */
/*   Updated: 2023/08/03 23:11:28 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	result = 1;
	i = 1;
	while (i <= power)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int nb = atoi(argv[1]);
		int power = atoi(argv[2]);
		int result = ft_iterative_power(nb, power);
		printf("%d", result);
	}
}*/
