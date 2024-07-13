/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 07:27:42 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/25 23:25:17 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "julio vitor";
	char dest[] = "";
	//int i;

	printf("source: %s\n", src);

	//ft_strncpy(dest, src, 5);
	strncpy(dest, src, 5);
	
	printf("destination: ");
	
	printf("%s", dest);
	
	
}
