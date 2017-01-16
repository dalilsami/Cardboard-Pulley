/*
** my_swap.c for my_swap in /home/bab/DEVC/Jour03/lemoin_a
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Wed Sep 28 13:52:31 2016 LE MOINE Adrien
** Last update Wed Sep 28 13:54:17 2016 LE MOINE Adrien
*/
#include	<unistd.h>

void my_swap(int *a, int *b)
{
  int	t;

  t = *a;
  *a = *b;
  *b = t;
}
