/*
** my_strlen.c for my_strlen in /home/bab/DEVC/Jour03/lemoin_a
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Wed Sep 28 10:40:44 2016 LE MOINE Adrien
** Last update Wed Sep 28 10:51:28 2016 LE MOINE Adrien
*/
#include	<unistd.h>

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    {
      ++i;
    }
  return (i);
}
