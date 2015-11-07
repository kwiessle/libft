#include "../libft.h"

int	main_putstr()
{
  char	str[50] = "mon cul sur la commode";

  ft_putstr("__TEST PUTSTR__\n");
  ft_putstr(str);
  ft_putstr("\n");
  ft_putendl(str);
  return(0);
}
