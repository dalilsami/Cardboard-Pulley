/*
** my_isneg.c for my_isneg in /home/bab/DEVC/Jour01/lemoin_a/my_isneg
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Mon Sep 26 16:28:24 2016 LE MOINE Adrien
** Last update Mon Sep 26 17:49:11 2016 LE MOINE Adrien
*/
#include	<unistd.h>

int	my_isneg(int n)
{
  if (n < 0)
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
