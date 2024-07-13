/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:54:33 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/30 19:10:13 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char *a = "Banana";
	char *b = "BaNana";
	printf("%d\n", ft_strcmp(a, b));
	printf("%d", strcmp(a, b));
}*/
