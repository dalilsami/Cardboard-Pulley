/*
** my_strncpy.c for my_strncpy in /home/bab/DEVC/Jour04/lemoin_a
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Thu Sep 29 13:38:10 2016 LE MOINE Adrien
** Last update Thu Sep 29 16:28:08 2016 LE MOINE Adrien
*/
#include	<unistd.h>

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (n > 0 && *(src + i))
    {
      dest[i] = src[i];
      ++i;
      --n;
    }
  while (n > 0)
    {
      dest[i] = '\0';
      ++i;
      --n;
    }
  return (dest);
}
