/*
** my_putchar.c for my_putchar in /home/bab/DEVC/Jour01/lemoin_a/my_putchar
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Mon Sep 26 13:34:50 2016 LE MOINE Adrien
** Last update Mon Sep 26 15:06:03 2016 LE MOINE Adrien
*/
#include	<unistd.h>

void	my_putchar(char c)
{
  write (1, &c, 1);
}
