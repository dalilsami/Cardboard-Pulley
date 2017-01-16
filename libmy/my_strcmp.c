/*
** my_strcmp.c for my_strcmp in /home/bab/DEVC/Jour04/lemoin_a
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Thu Sep 29 16:35:49 2016 LE MOINE Adrien
** Last update Sat Oct  1 04:50:01 2016 LE MOINE Adrien
*/
#include	<unistd.h>

int  my_cmp(char *s1, char *s2, int i)
{
  if ((s1[i] == '\0' && s2[i] != '\0') || s1[i] < s2[i])
    return (-1);
  else if ((s1[i] != '\0' && s2[i] == '\0') || s1[i] > s2[i])
    return (1);
  else if (s1[i] == '\0' && s2[i] == '\0')
    return (0);
  return my_cmp(s1, s2, (i + 1));
}

int my_strcmp(char *s1, char *s2)
{
  return my_cmp(s1, s2, 0);
}
