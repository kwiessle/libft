
int		ft_nb_blank(char const *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' )
			j++;
		i++;
	}
	return (j);
}

int		ft_strlen(char const *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	j = 0;
	ret = malloc(sizeof(ft_strlen(s) - ft_nb_blank(s)));
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' )
			i++;
		else
		{
			ret[j] = s[i];
			j++;
			i++;
		}
	}
	return (ret);
}
