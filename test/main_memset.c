#include "../libft.h"
#include <stdio.h>

int	main_memset()
{
	char test[10] = "012345678";
	char *alloc;
	int	i;

	ft_putstr("__TEST MEMSET__\n");
	ft_putstr("memset(test, 0, 5)\n");
	memset(test, 0, 5);
	i = -1;
	while (++i < 10)
	{
		printf("[%d]\n", test[i]);
	}
	ft_putchar ('\n');
	ft_putstr("\n__TEST MEMALLOC__\n");
	ft_putstr("\n(char*)ft_memalloc(sizeof(char) * 10)\n");
	alloc = (char*)ft_memalloc(sizeof(char) * 10);
	for (i = 0; i < 10; ++i)
	{
		printf("[%d]", alloc[i]);
	}
	ft_putchar ('\n');
	return (0);
}
