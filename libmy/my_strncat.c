/*
** my_strncat.c for my_strncat in /home/bab/DEVC/Jour04/lemoin_a
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Thu Sep 29 18:18:09 2016 LE MOINE Adrien
** Last update Sat Oct  1 04:27:38 2016 LE MOINE Adrien
*/
#include	<unistd.h>

char	*my_strncat(char *dest, char *src, int n)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (dest[i])
    ++i;
  while (src[j] && j < n)
    {
      dest[i] = src[j];
      ++i;
      ++j;
    }
  dest[i] = '\0';
  return (dest);
}
