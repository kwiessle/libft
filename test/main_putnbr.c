#include "../libft.h"

int	main_putnbr()
{
  int	n = 2147483647;
  int	m = -2147483648;
  int	o = 0;

  ft_putstr("__TEST PUTNBR__\n");
  ft_putnbr(n);
  ft_putchar('\n');
  ft_putnbr(m);
  ft_putchar('\n');
  ft_putnbr(o);
  ft_putchar('\n');

  ft_putstr("__TEST PUTNBR_FD__\n");
  ft_putnbr_fd(n, 1);
  ft_putchar('\n');
  ft_putnbr_fd(m, 1);
  ft_putchar('\n');
  ft_putnbr_fd(o, 1);
  ft_putchar('\n');

  return (0);
}
