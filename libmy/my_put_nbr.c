/*
** my_put_nbr.c for my_put_nbr in /home/bab/DEVC/Jour05/lemoin_a
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Sep 30 13:45:44 2016 LE MOINE Adrien
** Last update Fri Sep 30 23:44:58 2016 LE MOINE Adrien
*/
#include	<unistd.h>

void	my_putchar(char c);

void	my_put_nbr(int n)
{
  int i;
  unsigned int nb;

  nb = n;
  if (n < 0)
    {
      my_putchar('-');
      nb = -n ;
    }
  if (nb > 9)
    {
      i = nb / 10;
      nb = nb - 10 * i;
      my_put_nbr(i);
    }
  my_putchar('0' + nb);
}
