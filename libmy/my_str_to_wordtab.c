/*                                                                           
** my_str_to_wordtab.c for my_str_to_wordtab in /home/bab/DEVC/Jour07/lemoin_a
**
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
**
** Started on  Mon Oct  3 14:05:04 2016 LE MOINE Adrien
** Last update Tue Oct  4 16:38:14 2016 LE MOINE Adrien
*/
#include <stdlib.h>
#include <stdio.h>

char	*my_strndup(char *str, int n);

char	my_alpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
      || (c >= '0' && c <= '9'))
    return (1);
  return (0);
}

int	nb_word(char *str)
{
  int	nb;

  nb = 0;
  while (*str)
    {
      if (my_alpha(*str))
	{
	  nb++;
	  while (my_alpha(*str))
	    str++;
	}
      else
	str++;
    }
  return (nb);
}

int	my_wordlen(char *str)
{
  int	i;

  i = 0;
  while (my_alpha(*(str + i)))
    i++;
  return (i);
}

char	**my_fill(char *str, char **tab)
{
  int	i;

  i = 0;
  while (*str)
    {
      while (!my_alpha(*str) && *str)
	str++;
      if (my_alpha(*str))
	{
	  *(tab + i) = my_strndup(str, my_wordlen(str));
	  while (my_alpha(*str))
	    str++;
	}
      i++; 
    }
  return (tab);
}

char	**my_str_to_wordtab(char *str)
{
  int	nb;
  char	**tab;

  tab = 0;
  if (!str)
      return NULL;
  nb = nb_word(str);
  tab = malloc((nb + 1)* sizeof(*tab));
  if (tab)
    {
      *(tab + nb) = NULL;
      tab = my_fill(str, tab);
    }
  return (tab);
}
