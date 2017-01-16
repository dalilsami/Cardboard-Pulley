/*
** my_strdup.c for my_strdup in /home/bab/DEVC/Jour07/lemoin_a
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Mon Oct  3 11:44:50 2016 LE MOINE Adrien
** Last update Thu Oct  6 02:28:31 2016 LE MOINE Adrien
*/
#include	<unistd.h>
#include	<stdlib.h>

int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  int	i;
  char	*dest;

  dest = malloc((my_strlen(str) + 1) * sizeof(*str));
  if (dest == 0)
    return (0);
  while (str[i] != 0)
    {
      dest[i] = str[i];
      i = i + 1;
    }
  return (dest);
}
