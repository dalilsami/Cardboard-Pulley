/*
** my_strstr.c for my_strstr in /home/bab/DEVC/Jour04/lemoin_a
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Sat Oct  1 05:05:43 2016 LE MOINE Adrien
** Last update Sat Oct  1 11:39:50 2016 LE MOINE Adrien
*/
#include	<unistd.h>

char	*my_strstr(char *str, char *to_find)
{
  int	j;
  char	*is;

  is = NULL;
  while (*str != 0)
    {
      j = 0;
      while (*str == *to_find)
	{
	  if (*(to_find + 1) == '\0')
	    return (str - j);
	  str++;
	  to_find++;
	  j++;
	}
      to_find = to_find - j;
      str++;
    }
  return (is);
}
