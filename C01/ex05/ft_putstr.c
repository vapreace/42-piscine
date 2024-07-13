/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 19:00:50 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/23 19:49:06 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		write(1, &str[i], 1);
		str++;
	}
}
/*
int	main(void)
{
	char str[] = "Hello world!";
	ft_putstr(str);
}*/
