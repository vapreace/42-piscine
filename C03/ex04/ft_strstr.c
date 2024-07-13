/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:41:21 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/31 13:15:44 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	comparar(char *a, char *b)
{
	while (*b != '\0')
	{
		if (*a != *b)
			return (0);
		a++;
		b++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (str[0] == '\0' && to_find[0] == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*to_find == '\0')
			return (str);
		if (*str == *to_find && comparar(str, to_find))
			return (str);
		str++;
	}
	return (0);
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char a[] = "";
	char b[] = "";

	printf("MAIN:%s", ft_strstr(a, b));
	printf("ORIGINAL:%s", strstr(a, b));
}
