#include "../libft.h"
#include <stdio.h>

int	main_strtrim(void)
{
	char	s0[50] = "";
	char	s1[50] = "test";
	char	s2[50] = "   \t\n  test    \n\t";
	char	s3[50] = "    ceci est un test     ";
	char	s4[50] = " ";

	ft_putstr("__TEST STRTRIM__\n");
	ft_strtrim("");
	printf("Init : %s (%p)\n", s0, s0);
	printf("Res  : %s (%p)\n\n", ft_strtrim(s0), ft_strtrim(s0));
	printf("Init : %s (%p)\n", s1, s1);
	printf("Res  : %s (%p)\n\n", ft_strtrim(s1), ft_strtrim(s1));
	printf("Init : %s (%p)\n", s2, s2);
	printf("Res  : %s (%p)\n\n", ft_strtrim(s2), ft_strtrim(s2));
	printf("Init : %s (%p)\n", s3, s3);
	printf("Res  : %s (%p)\n\n", ft_strtrim(s3), ft_strtrim(s3));
	printf("Init : %s (%p)\n", s4, s4);
	printf("Res  : %s (%p)\n\n", ft_strtrim(s4), ft_strtrim(s4));

	return (0);
}
