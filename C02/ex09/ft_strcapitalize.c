/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:27:47 by isousa-m          #+#    #+#             */
/*   Updated: 2023/07/27 01:12:27 by isousa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	ft_strlowercase(str);
	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
		else if ((str[i] > 57 && str[i] < 65)
			|| (str[i] > 90 && str[i] < 97))
		{
			if (str[j] >= 97 && str[j] <= 122)
				str[j] -= 32;
		}
		else if ((str[i] < 48) || (str[i] > 122)) 
		{
			if (str[j] >= 97 && str[j] <= 122)
				str[j] -= 32;
		}
		i++;
		j++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char b[] = "ola,dsa-dGsdsa=asd+aFdsaa#fsdTasd|asdsad/dadsa";

	ft_strcapitalize(a);
	ft_strcapitalize(b);

	printf("%s\n", a);
	printf("%s\n", b);
}*/
