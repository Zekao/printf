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

int   ft_strlen(const char *str)
{
   int   i;
   i = 0;
   while (str[i])
      i++;
   return (i);
}

void	ft_print_x(void *nbr)
{
   long int nb;
   nb = (long int)nbr;
   ft_putstr("0x");
	ft_putnbr_base_unsigned(nb, "0123456789abcdef");
}

int main() 
{
   char    *a;

   a = "7asdasd";
   printf("------------------------- TEST 1 -------------------------\n");
   printf("vrai printf p : \n");
   printf("%p\n", "1234");
   printf("mon printf p : \n");
   ft_print_x("1234");
   printf("\n------------------------- TEST 2 -------------------------\n");
   printf("vrai printf p : \n");
   printf("%p\n", &a);
   printf("mon printf p : \n");
   ft_print_x(&a);
   write(1, "\n", 1);
   printf("\n------------------------- TEST 3 -------------------------\n");
   printf("vrai printf p : \n");
   printf("%p\n", (void *)512321);
   printf("mon printf p : \n");
   ft_print_x((void *)512321);
   write(1, "\n", 1);
}
