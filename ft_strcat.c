
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(const char	*str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *s1, const char* s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = malloc(sizeof(ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[j] != '\0')
	{
		str[j] = s1[j];
		j++;
	}
	while (s2[i] != '\0')
	{
		str[j] = s2[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}

int		main(int ac, char **av)
{
	if (ac)
	{
		printf("ft_strcat : %s\n", ft_strcat(av[1], av[2]));
	}
	return (0);
}
