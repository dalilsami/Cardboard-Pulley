/*
** my_strcpy.c for my_strcpy in /home/bab/DEVC/Jour04/lemoin_a
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Thu Sep 29 13:38:10 2016 LE MOINE Adrien
** Last update Thu Sep 29 13:53:09 2016 LE MOINE Adrien
*/
#include	<unistd.h>

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      ++i;
    }
  dest[i] = '\0';
  return (dest);
}
