/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 16:12:00 by kwiessle          #+#    #+#             */
/*   Updated: 2015/10/30 16:36:41 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *str;
	int		i;
	int		j;

	if (n == 0)
		return (s1);
	i = 0;
	str = malloc(sizeof(ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (str[i] != '\0' || n != 0)
	{
		str[i] = s2[j];
		i++;
		j++;
		n--;
	}
	str[i] = '\0';
	return (str);
}

int		main()
{
	printf("strcat : %s\n", ft_strncat("kiefer", "laterreur", 3));
	return (0);
}

