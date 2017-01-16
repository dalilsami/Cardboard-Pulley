/*
** my_strcat.c for my_strcat in /home/bab/DEVC/Jour04/lemoin_a
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Thu Sep 29 18:18:09 2016 LE MOINE Adrien
** Last update Thu Sep 29 20:15:39 2016 LE MOINE Adrien
*/
#include	<unistd.h>

char	*my_strcat(char *dest, char *src)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (dest[i])
    ++i;
  while (src[j])
    {
      dest[i] = src[j];
      ++i;
      ++j;
    }
  dest[i] = '\0';
  return (dest);
}
