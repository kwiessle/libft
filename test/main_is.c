#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main_is(void)
{

	ft_putstr("__TEST ISALPHA__\n");
	printf("%s %d\n", "Libc  : ", isalpha('a'));
	printf("%s %d\n\n", "Libft : ", ft_isalpha('a'));
	printf("%s %d\n", "Libc  : ", isalpha('A'));
	printf("%s %d\n\n", "Libft : ", ft_isalpha('A'));
	printf("%s %d\n", "Libc  : ", isalpha(66));
	printf("%s %d\n\n", "Libft : ", ft_isalpha(66));
	printf("%s %d\n", "Libc  : ", isalpha('z'));
	printf("%s %d\n\n", "Libft : ", ft_isalpha('z'));
	printf("%s %d\n", "Libc  : ", isalpha('Z'));
	printf("%s %d\n\n", "Libft : ", ft_isalpha('Z'));
	printf("%s %d\n", "Libc  : ", isalpha('5'));
	printf("%s %d\n\n", "Libft : ", ft_isalpha('5'));
	printf("%s %d\n", "Libc  : ", isalpha('}'));
	printf("%s %d\n\n", "Libft : ", ft_isalpha('}'));

	ft_putstr("__TEST ISDIGIT__\n");
	printf("%s %d\n", "Libc  : ", isdigit('0'));
	printf("%s %d\n\n", "Libft : ", ft_isdigit('0'));
	printf("%s %d\n", "Libc  : ", isdigit('9'));
	printf("%s %d\n\n", "Libft : ", ft_isdigit('9'));
	printf("%s %d\n", "Libc  : ", isdigit('z'));
	printf("%s %d\n\n", "Libft : ", ft_isdigit('z'));
	printf("%s %d\n", "Libc  : ", isdigit('}'));
	printf("%s %d\n\n", "Libft : ", ft_isdigit('}'));
	printf("%s %d\n", "Libc  : ", isdigit(5));
	printf("%s %d\n\n", "Libft : ", ft_isdigit(5));
	printf("%s %d\n", "Libc  : ", isdigit(50));
	printf("%s %d\n\n", "Libft : ", ft_isdigit(50));

	ft_putstr("__TEST ISALNUM__\n");
	printf("%s %d\n", "Libc  : ", isalnum('a'));
	printf("%s %d\n\n", "Libft : ", ft_isalnum('a'));
	printf("%s %d\n", "Libc  : ", isalnum('Z'));
	printf("%s %d\n\n", "Libft : ", ft_isalnum('Z'));
	printf("%s %d\n", "Libc  : ", isalnum('5'));
	printf("%s %d\n\n", "Libft : ", ft_isalnum('5'));
	printf("%s %d\n", "Libc  : ", isalnum('}'));
	printf("%s %d\n\n", "Libft : ", ft_isalnum('}'));
	printf("%s %d\n", "Libc  : ", isalnum(' '));
	printf("%s %d\n\n", "Libft : ", ft_isalnum(' '));

	ft_putstr("__TEST ISASCII__\n");
	printf("%s %d\n", "Libc  : ", isascii('a'));
	printf("%s %d\n\n", "Libft : ", ft_isascii('a'));
	printf("%s %d\n", "Libc  : ", isascii(66));
	printf("%s %d\n\n", "Libft : ", ft_isascii(66));
	printf("%s %d\n", "Libc  : ", isascii(' '));
	printf("%s %d\n\n", "Libft : ", ft_isascii(' '));
	printf("%s %d\n", "Libc  : ", isascii('5'));
	printf("%s %d\n\n", "Libft : ", ft_isascii('5'));
	printf("%s %d\n", "Libc  : ", isascii('}'));
	printf("%s %d\n\n", "Libft : ", ft_isascii('}'));

	ft_putstr("__TEST ISPRINT__\n");
	printf("%s %d\n", "Libc  : ", isprint('a'));
	printf("%s %d\n\n", "Libft : ", ft_isprint('a'));
	printf("%s %d\n", "Libc  : ", isprint(66));
	printf("%s %d\n\n", "Libft : ", ft_isprint(66));
	printf("%s %d\n", "Libc  : ", isprint(' '));
	printf("%s %d\n\n", "Libft : ", ft_isprint(' '));
	printf("%s %d\n", "Libc  : ", isprint('5'));
	printf("%s %d\n\n", "Libft : ", ft_isprint('5'));

	ft_putstr("__TEST TOUPPER__\n");
	printf("%s %d\n", "Libc  : ", toupper('a'));
	printf("%s %d\n\n", "Libft : ", ft_toupper('a'));
	printf("%s %d\n", "Libc  : ", toupper('z'));
	printf("%s %d\n\n", "Libft : ", ft_toupper('z'));
	printf("%s %d\n", "Libc  : ", toupper('A'));
	printf("%s %d\n\n", "Libft : ", ft_toupper('A'));
	printf("%s %d\n", "Libc  : ", toupper('0'));
	printf("%s %d\n\n", "Libft : ", ft_toupper('0'));
	printf("%s %d\n", "Libc  : ", toupper(115));
	printf("%s %d\n\n", "Libft : ", ft_toupper(115));

	ft_putstr("__TEST TOLOWER__\n");
	printf("%s %d\n", "Libc  : ", tolower('A'));
	printf("%s %d\n\n", "Libft : ", ft_tolower('A'));
	printf("%s %d\n", "Libc  : ", tolower('Z'));
	printf("%s %d\n\n", "Libft : ", ft_tolower('Z'));
	printf("%s %d\n", "Libc  : ", tolower('a'));
	printf("%s %d\n\n", "Libft : ", ft_tolower('a'));
	printf("%s %d\n", "Libc  : ", tolower('&'));
	printf("%s %d\n\n", "Libft : ", ft_tolower('&'));
	printf("%s %d\n", "Libc  : ", tolower(82));
	printf("%s %d\n\n", "Libft : ", ft_tolower(82));

	return (0);
}
