#include <stdio.h>
#include <unistd.h>

void  ft_putstr(char *str)
{
   int     i;

   i = 0;
   while (str[i])
   {
      write(1, &str[i], 1);
      i++;
   }
}
void  ft_putchar(char c)
{
   write(1, &c, 1);
}

int	ft_convertbase(char *base)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	if (base[i] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		y = i + 1;
		while (base[y])
		{
			if (base[i] == base[y])
				return (0);
			y++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int		a;
	unsigned int		new_nbr;

	a = ft_convertbase(base);
	if (a == 0 || a == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		new_nbr = (unsigned int)(nbr * -1);
	}
	else
		new_nbr = (unsigned int) nbr;
	if (new_nbr >= a)
		ft_putnbr_base(new_nbr / a, base);
	ft_putchar(base[new_nbr % a]);
}

void	ft_print_x(void *nbr)
{
   long int nb;
   nb = (long int)nbr;
	ft_putnbr_base(nb, "0123456789abcdef");
}

int main() 
{
   int a;

   a = 7185;
   printf("vrai printf p : \n");
   printf("%p\n", "123");
   printf("mon printf p : \n");
   ft_putstr("0x");

   ft_print_x("123");
   write(1, "\n", 1);
}