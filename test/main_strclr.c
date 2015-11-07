#include "../libft.h"
#include <stdio.h>

int	main_strclr(void)
{
	char	str[50] = "mdrtrololoxptdr";

	ft_putstr("__TEST STRCLR__\n");
	printf("Str : %s\n", str);
	ft_strclr(str);
	printf("Res : %s\n", str);

	return (0);
}
