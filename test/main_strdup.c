#include "../libft.h"
#include "stdio.h"

int	main_strdup(void)
{
	char	test[10] = "!test1";

	ft_putstr("__TEST STRDUP__\n");
	printf("String: %s (%p)\n", test, test);
	printf("Libc  : %s (%p)\n", strdup(test), strdup(test));
	printf("Libft : %s (%p)\n", ft_strdup(test), ft_strdup(test));
	return (0);
}
