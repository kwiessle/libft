#include "../libft.h"
#include <stdio.h>

int	main_strchr(void)
{
	char	s1[50] = "test";

	ft_putstr("TEST __STRCHR__\n");
	printf("%s %s\n", "Libc  : ", strchr(s1, 't'));
	printf("%s %s\n\n", "Libft : ", ft_strchr(s1, 't'));
	printf("%s %s\n", "Libc  : ", strchr(s1, 's'));
	printf("%s %s\n\n", "Libft : ", ft_strchr(s1, 's'));
	printf("%s %s\n", "Libc  : ", strchr(s1, 'x'));
	printf("%s %s\n\n", "Libft : ", ft_strchr(s1, 'x'));
	printf("%s %s\n", "Libc  : ", strchr(s1, '\0'));
	printf("%s %s\n\n", "Libft : ", ft_strchr(s1, '\0'));

	ft_putstr("TEST __STRRCHR__\n");
	printf("%s %s\n", "Libc  : ", strrchr(s1, 't'));
	printf("%s %s\n\n", "Libft : ", ft_strrchr(s1, 't'));
	printf("%s %s\n", "Libc  : ", strrchr(s1, 'e'));
	printf("%s %s\n\n", "Libft : ", ft_strrchr(s1, 'e'));
	printf("%s %s\n", "Libc  : ", strrchr(s1, 'x'));
	printf("%s %s\n\n", "Libft : ", ft_strrchr(s1, 'x'));
	printf("%s %s\n", "Libc  : ", strrchr(s1, '\0'));
	printf("%s %s\n\n", "Libft : ", ft_strrchr(s1, '\0'));

	return (0);
}
