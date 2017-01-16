/*
** my_putstr.c for my_putstr in /home/bab/DEVC/Jour03/lemoin_a
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Wed Sep 28 10:09:10 2016 LE MOINE Adrien
** Last update Wed Sep 28 20:04:25 2016 LE MOINE Adrien
*/
#include	<unistd.h>

void	my_putchar(char c);

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      ++str;
    }
}
