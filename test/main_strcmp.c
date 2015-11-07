#include "../libft.h"
#include <stdio.h>

int	main_strcmp(void)
{
	char	s1[50] = "test";
	char	s2[50] = "test";
	char	s3[50] = "tesa";
	char	s4[50] = "testeuh";
	char	s5[50] = "tes";

	ft_putstr("__TEST STRCMP__\n");
	printf("%s %d\n", "Libc  : ", strcmp(s1, s2));
	printf("%s %d\n\n", "Libft : ", ft_strcmp(s1, s2));
	printf("%s %d\n", "Libc  : ", strcmp(s1, s3));
	printf("%s %d\n\n", "Libft : ", ft_strcmp(s1, s3));
	printf("%s %d\n", "Libc  : ", strcmp(s1, s4));
	printf("%s %d\n\n", "Libft : ", ft_strcmp(s1, s4));
	printf("%s %d\n", "Libc  : ", strcmp(s1, s5));
	printf("%s %d\n\n", "Libft : ", ft_strcmp(s1, s5));

	ft_putstr("__TEST STRNCMP__\n");
	printf("%s %d\n", "Libc  : ", strncmp(s1, s2, 1));
	printf("%s %d\n\n", "Libft : ", ft_strncmp(s1, s2, 1));
	printf("%s %d\n", "Libc  : ", strncmp(s1, s3, 3));
	printf("%s %d\n\n", "Libft : ", ft_strncmp(s1, s3, 3));
	printf("%s %d\n", "Libc  : ", strncmp(s1, s4, 6));
	printf("%s %d\n\n", "Libft : ", ft_strncmp(s1, s4, 6));
	printf("%s %d\n", "Libc  : ", strncmp(s1, s5, 10));
	printf("%s %d\n\n", "Libft : ", ft_strncmp(s1, s5, 10));

	return (0);
}
