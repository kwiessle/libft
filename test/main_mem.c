#include "../libft.h"
#include <stdio.h>

int	main_mem(void)
{
	char	s0[20] = "test";
	char	s1[15] = "test";
	char	s2[20] = "t3st";
	char	s3[25] = "test OK";
	char	s4[25] = "OK";
	char	s5[25] = "Q\0O\0\0K\0";


	ft_putstr("__TEST MEMCHR__\n");
	printf("%s %p\n", "Libc   : ", memchr(s0, 'e', 4));
	printf("%s %p\n\n", "Libft  : ", ft_memchr(s0, 'e', 4));
	printf("%s %p\n", "Libc   : ", memchr(s0, 'e', 1));
	printf("%s %p\n\n", "Libft  : ", ft_memchr(s0, 'e', 1));
	printf("%s %p\n", "Libc   : ", memchr(s0, 'e', 0));
	printf("%s %p\n\n", "Libft  : ", ft_memchr(s0, 'e', 0));
	printf("%s %p\n", "Libc   : ", memchr(s0, 'e', 24));
	printf("%s %p\n\n", "Libft  : ", ft_memchr(s0, 'e', 24));
	printf("%s %p\n", "Libc   : ", memchr(s0, 't', 4));
	printf("%s %p\n\n", "Libft  : ", ft_memchr(s0, 't', 4));
	printf("%s %p\n", "Libc   : ", memchr(s0, 'x', 4));
	printf("%s %p\n\n", "Libft  : ", ft_memchr(s0, 'x', 4));

	ft_putstr("__TEST MEMCMP__\n");
	printf("%s %d\n", "Libc   : ", memcmp(s0, s2, 1));
	printf("%s %d\n\n", "Libft  : ", ft_memcmp(s0, s2, 1));
	printf("%s %d\n", "Libc   : ", memcmp(s0, s2, 2));
	printf("%s %d\n\n", "Libft  : ", ft_memcmp(s0, s2, 2));
	printf("%s %d\n", "Libc   : ", memcmp(s0, s2, 3));
	printf("%s %d\n\n", "Libft  : ", ft_memcmp(s0, s2, 3));
	printf("%s %d\n", "Libc   : ", memcmp(s0, s2, 4));
	printf("%s %d\n\n", "Libft  : ", ft_memcmp(s0, s2, 4));
	printf("%s %d\n", "Libc   : ", memcmp(s0, s1, 15));
	printf("%s %d\n\n", "Libft  : ", ft_memcmp(s0, s1, 15));
	printf("%s %d\n", "Libc   : ", memcmp(s0, s1, 4));
	printf("%s %d\n\n", "Libft  : ", ft_memcmp(s0, s1, 4));

	ft_putstr("__TEST MEMMOVE__\n");
	printf("Libc  : Dst :%p ; Src : %p: %s\n", memmove(s0, s2, 4), s2, s0);
	printf("Libft : Dst :%p ; Src : %p: %s\n\n", ft_memmove(s0, s2, 4), s2, s0);
	printf("Libc  : Dst :%p ; Src : %p: %s\n", memmove(s1, s4, 0), s4, s1);
	printf("Libft : Dst :%p ; Src : %p: %s\n\n", ft_memmove(s1, s4, 0), s4, s1);
	printf("Libc  : Dst :%p ; Src : %p: %s\n", memmove(s1, s4, 1), s4, s1);
	printf("Libft : Dst :%p ; Src : %p: %s\n\n", ft_memmove(s1, s4, 1), s4, s1);

	ft_putstr("__TEST MEMCPY__\n");
	printf("Libc  : Dst :%p ; Src : %p: %s\n", memcpy(s4, s3, 0), s3, s4);
	printf("Libft : Dst :%p ; Src : %p: %s\n\n", ft_memcpy(s4, s3, 0), s3, s4);
	printf("Libc  : Dst :%p ; Src : %p: %s\n", memcpy(s4, s3, 1), s3, s4);
	printf("Libft : Dst :%p ; Src : %p: %s\n\n", ft_memcpy(s4, s3, 1), s3, s4);
	printf("Libc  : Dst :%p ; Src : %p: %s\n", memcpy(s4, s3, 12), s3, s4);
	printf("Libft : Dst :%p ; Src : %p: %s\n\n", ft_memcpy(s4, s3, 12), s3, s4);
	printf("Libc  : Dst :%p ; Src : %p: %s\n", memcpy(s4, s5, 12), s5, s4);
	printf("Libft : Dst :%p ; Src : %p: %s\n\n", ft_memcpy(s4, s5, 12), s5, s4);
	printf("Libc  : Dst :%p ; Src : %p: %s\n", memcpy(s5, s4, 12), s4, s5);
	printf("Libft : Dst :%p ; Src : %p: %s\n\n", ft_memcpy(s5, s4, 12), s4, s5);

	ft_putstr("__TEST MEMCCPY__\n");
	printf("Libc  : Dst :%p ; Src : %p: %s\n", memccpy(s4, s3, ' ',12), s3, s4);
	printf("Libft : Dst :%p ; Src : %p: %s\n\n", ft_memccpy(s4, s3, ' ', 12), s3, s4);
	printf("Libc  : Dst :%p ; Src : %p: %s\n", memccpy(s4, s3, 's',4), s3, s4);
	printf("Libft : Dst :%p ; Src : %p: %s\n\n", ft_memccpy(s4, s3, 's', 4), s3, s4);

	return (0);
}
