/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 19:41:22 by isousa-m          #+#    #+#             */
/*   Updated: 2023/08/01 13:48:57 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			result = (s1[i] - s2[i]);
			break ;
		}
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char *a = "treeeeee";
	char *b = "AreE";
	
	printf("%d\n", ft_strncmp(a, b, 0));
	printf("%d\n", strncmp(a, b, 0));
}*/
