/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:27:33 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/31 15:32:40 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	result;

	i = 0;
	j = 0;
	result = 0;
	if (size < ft_strlen(dest))
		result = ft_strlen(src) + size;
	else
		result = ft_strlen(dest) + ft_strlen(src); 
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && i < size - 1)
	{
		if (size == 0)
			break ;
		else
			dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (result);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	first[40] = "to the real world!";
	char	second[40] = "Welcome ";
	
	printf("%d\n", ft_strlcat(second, first, 0));
	//printf("%zu\n", strlcat(second, first, 0));
	printf("%s\n", second);
	
}*/
