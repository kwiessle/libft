/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:34:01 by kwiessle          #+#    #+#             */
/*   Updated: 2015/11/23 18:34:06 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		count_elem(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			j++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (j);
}

static int		**set_matrix(const char *s, char c)
{
	int		**matrix;
	int		i;

	i = 0;
	matrix = malloc((count_elem(s, c)) * sizeof(int*));
	while (i < count_elem(s, c))
	{
		matrix[i] = malloc(2 * sizeof(int));
		i++;
	printf("set matrix\n\n");
	}
	return (matrix);
}

static int		**matrix(const char *s, char c)
{
	int		**matrix;
	int		i;
	int		index;
	int		mem_i;

	i = 0;
	index = 0;
	matrix = set_matrix(s, c);
	while (s[i])
	{
		if (s[i] != c)
			mem_i = i;
		while (s[i] != c)
		{
			i++;
			if (s[i] == c || s[i] == '\0')
			{
				matrix[index][0] = mem_i;
				matrix[index][1] = i - mem_i;
			printf("matrix\n\n");
				index++;
			}
		}
		i++;
	}
	return (matrix);
}

char	**ft_strsplit(const char *s, char c)
{
	int		**map;
	char	**tab;
	int		a;
	int		i;

	map = matrix(s, c);
	a = count_elem(s, c);
	if (s)
		tab = (char **)malloc((a + 1) * sizeof(char*));
	i = 0;
	while (i < a)
	{
		tab[i] = ft_strsub(s, map[i][0], map[i][1]);
		i++;
	}
	tab[i] = 0;
	return (tab);
}

/*int		main()
{
	char **tab;
	char *s = "***salut";

	printf("count_elem = %d\n", count_elem(s, '*'));
	tab = ft_strsplit(s, '*');
	printf("result : %s\n", tab[0]);
	printf("result : %s\n", tab[1]);
//	printf("result : %s\n", tab[2]);
//	printf("result : %s\n", tab[3]);

	return (0);
}*/
