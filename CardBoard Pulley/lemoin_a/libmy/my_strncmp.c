/*
** my_strncmp.c for my_strncmp in /home/bab/DEVC/Jour04/lemoin_a
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Thu Sep 29 17:48:44 2016 LE MOINE Adrien
** Last update Tue Oct  4 08:04:17 2016 LE MOINE Adrien
*/
#include	<unistd.h>

int	my_ncmp(char *s1, char *s2, int n, int i)
{
  if (i == n)
    return (0);
  if ((s1[i] == '\0' && s2[i] != '\0') || s1[i] < s2[i])
    return (-1);
  else if ((s1[i] != '\0' && s2[i] == '\0') || s1[i] > s2[i])
    return (1);
  else if (s1[i] == '\0' && s2[i] == '\0')
    return (0);
  return my_ncmp(s1, s2, n, (i + 1));
}

int	my_strncmp(char *s1, char *s2, int n)
{
  return my_ncmp(s1, s2, n, 0);
}
