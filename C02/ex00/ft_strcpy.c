/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:59:05 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/25 23:21:29 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "Hello world!";
	char dest[20];
			
	ft_strcpy(dest, src);
	
	
	printf("SRC: %s\n", src);
	printf("DEST: %s\n", dest); 
	printf("strcpy(): %s\n", strcpy(dest, src));
}*/
