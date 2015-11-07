#include "../libft.h"
#include <stdio.h>

int	main_strsplit(void)
{
	char	str1[50] = "*coucou**tu*veux***voir******malib";
	char	str2[50] = "coucou*tu*veux****voir*malib*";
	char	**tab1;
	char	**tab2;
	int		i;

	ft_putstr("__TEST STRSPLIT__\n");
	printf("String : %s, Sep : *\n", str1);
	tab1 = ft_strsplit(str1, '*');
	tab2 = ft_strsplit(str2, '*');
	i = -1;
	while (tab1[++i])
		ft_putendl(tab1[i]);
	printf("\nString : %s, Sep : *\n", str2);
	i = -1;
	while (tab2[++i])
		ft_putendl(tab2[i]);
	return (0);
}
