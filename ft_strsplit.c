#include <stdio.h>
#include <stdlib.h>
#include "test.h"

int		count_elem(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		if (s[i] != c)
		{
			i++;
			if (s[i] == c || s[i] == '\0')
			{
				j++;
			}
		}
	}
	return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	char		**tab;
	int			i;
	int			mem_i;
	size_t		len_word;
	int			index;

	i = 0;
	index = 0;
	tab = malloc(sizeof(count_elem(s, c) + 1));
	while (s[i] != '\0')
	{
		if (s[i] != c)
			mem_i = i;
		while (s[i] != c)
		{
			i++;
			if (s[i] == c)
			{
				len_word = i - mem_i;
				tab[index] = ft_strsub(s, mem_i, len_word);
				printf("index = %d value :%s\n", index, tab[index]);
				index++;
			}
		}
		i++;
	}
	*tab[index] = '\0';
	printf("salam");
	return (tab);
}

int		main()
{
	char *s = "kieferl*at**erreuri*";
	printf("il y a %d element(s)\n", count_elem(s,'*'));
	ft_strsplit(s, '*');
	return (0);
}
