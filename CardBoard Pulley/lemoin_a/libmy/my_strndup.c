/*   
** my_str_to_wordtab.c for my_str_to_wordtab in /home/bab/DEVC/Jour07/lemoin_a
**
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
**
** Started on  Tue Oct  4 11:05:04 2016 LE MOINE Adrien
** Last update Tue Oct  4 13:55:49 2016 LE MOINE Adrien
*/

#include <stdlib.h>

char	*my_strndup(char *str, int n)
{
  char	*dup;
  int	i;

  dup = 0;
  dup = malloc((n + 1) * sizeof(*dup));
  if (dup)
    {
      i = 0;
      while (*(str + i) && i < n)
	{
	  *(dup + i) = *(str + i);
	  i++;
	}
      *(dup + i) = '\0';
    }
  return (dup);
}
