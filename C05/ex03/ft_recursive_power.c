/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <isousa-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:04:49 by isousa-m          #+#    #+#             */
/*   Updated: 2023/08/05 12:50:31 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
	{
		nb = nb * (ft_recursive_power(nb, power - 1));
		return (nb);
	}
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
		int result = ft_recursive_power(nb, power);
		printf("%d", result);
	}
}*/