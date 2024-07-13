/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:59:42 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/20 12:38:40 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	d;

	d = 48;
	while (d <= 57)
	{
		ft_putchar(d);
		d++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
}*/
