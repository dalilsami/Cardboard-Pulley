/*
** my_getnbr.c for my_getnbr in /home/bab/DEVC/Jour05/lemoin_a
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Sep 30 18:56:10 2016 LE MOINE Adrien
** Last update Sat Oct  1 04:23:25 2016 LE MOINE Adrien
*/
#include	<unistd.h>

int	my_getnbr(char *str)
{
  int	neg;
  int	i;

  neg = 1;
  i = 0;
  while (*str == 43 || *str == 45)
    {
      if (*str == 45)
	neg = neg * -1;
      str++;
    }
  while ((*str > 47) && (*str < 58))
    {
      i = i * 10 + *str - '0';
      str++;
    }
  if (neg == -1)
    i = i * neg;
  return (i);
}
