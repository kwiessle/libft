#include "../libft.h"
#include <stdio.h>


int	main_strstr(void)
{
	char	s0[2] = "";
	char	s1[50] = "voyons si tes verifs montrent que ce test est OK";
	char	s2[50] = "test";
	char	s3[50] = "coucou";

	ft_putstr("TEST __STRSTR__\n");
	printf("%s %s\n", "Libc  : ", strstr(s1, s0));
	printf("%s %s\n\n", "Libft : ", ft_strstr(s1, s0));
	printf("%s %s\n", "Libc  : ", strstr(s1, s2));
	printf("%s %s\n\n", "Libft : ", ft_strstr(s1, s2));
	printf("%s %s\n", "Libc  : ", strstr(s1, s3));
	printf("%s %s\n\n", "Libft : ", ft_strstr(s1, s3));

	ft_putstr("TEST __STRNSTR__\n");
	printf("%s %s\n", "Libc  : ", strnstr(s1, s0, 0));
	printf("%s %s\n\n", "Libft : ", ft_strnstr(s1, s0, 0));
	printf("%s %s\n", "Libc  : ", strnstr(s1, s2, 0));
	printf("%s %s\n\n", "Libft : ", ft_strnstr(s1, s2, 0));
	printf("%s %s\n", "Libc  : ", strnstr(s1, s2, 10));
	printf("%s %s\n\n", "Libft : ", ft_strnstr(s1, s2, 10));
	printf("%s %s\n", "Libc  : ", strnstr(s1, s2, 39));
	printf("%s %s\n\n", "Libft : ", ft_strnstr(s1, s2, 39));
	printf("%s %s\n", "Libc  : ", strnstr(s1, s2, 50));
	printf("%s %s\n\n", "Libft : ", ft_strnstr(s1, s2, 50));
	return (0);
}
