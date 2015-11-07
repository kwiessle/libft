#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main_atoi(void)
{
	char	s0[50] = "42";
	char	s1[50] = " lol   -42";
	char	s2[50] = "\n\f\t\v\r-42";
	char	s3[50] = "    - 42ahah42";
	char	s4[50] = "    +-42-42";
	char	s5[50] = "lol";
	char	s6[50] = "0";
	char	s7[50] = "2147483647";
	char	s8[50] = "-2147483648";

	ft_putstr("__TEST ATOI__\n");
	printf("Libc  : %d\n", atoi(s0));
	printf("Libft : %d\n\n", ft_atoi(s0));
	printf("Libc  : %d\n", atoi(s1));
	printf("Libft : %d\n\n", ft_atoi(s1));
	printf("Libc  : %d\n", atoi(s2));
	printf("Libft : %d\n\n", ft_atoi(s2));
	printf("Libc  : %d\n", atoi(s3));
	printf("Libft : %d\n\n", ft_atoi(s3));
	printf("Libc  : %d\n", atoi(s4));
	printf("Libft : %d\n\n", ft_atoi(s4));
	printf("Libc  : %d\n", atoi(s5));
	printf("Libft : %d\n\n", ft_atoi(s5));
	printf("Libc  : %d\n", atoi(s6));
	printf("Libft : %d\n\n", ft_atoi(s6));
	printf("Libc  : %d\n", atoi(s7));
	printf("Libft : %d\n\n", ft_atoi(s7));
	printf("Libc  : %d\n", atoi(s8));
	printf("Libft : %d\n\n", ft_atoi(s8));

	return (0);
}
