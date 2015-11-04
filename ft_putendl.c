

void	ft_putendl(char const *s)
{
	int		i;
	char	nl;

	i = 0;
	nl = '\n';
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, &nl,1);
}
