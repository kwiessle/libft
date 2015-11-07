
#include "libft.h"

int		count_elem(char const *s, char c)
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
	while (s[i])
	{
		if (s[i] != c)
			mem_i = i;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			if (s[i] == c ||s[i] == '\0')
			{
				len_word = i - mem_i;
				tab[index] = ft_strsub(s, mem_i, len_word);
				printf("tab[%d] = %s\n", index, tab[index]);
				index++;
			}
			tab[index] = 0;
		}
			i++;
	}
	printf("salam");
	return (tab);
}

int		main()
{
	const char *s = "*z**dp";
	printf("il y a %d element(s)\n", count_elem(s,'*'));
	ft_strsplit(s, '*');
	return (0);
}
