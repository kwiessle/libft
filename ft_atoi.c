

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <libc.h>

int		ft_atoi(char *str)
{
	int		i;
	int		toi;

	i = 0;
	toi = 0;
	if (str[i] == '-')
		i++;
	while (str[i] != '\0' && str[i] > 47 && str[i] < 58)
	{
		toi = (toi * 10) + (str[i] - 48);
		i++;
	}
	if (str[0] == '-')
		toi = -toi;
	return (toi);
}

int		main(int ac, char **av)
{
	char	c = '\n';
	if (ac)
		printf("atoi : %d\n", ft_atoi(av[1]));
		printf("real atoi : %d", atoi(av[1]));
	write(1, &c, 1);
	return (0);
}



