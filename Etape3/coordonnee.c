/*
** coordonnee.c for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape3
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Jan 20 12:09:49 2017 LE MOINE Adrien
** Last update Fri Jan 20 12:12:39 2017 LE MOINE Adrien
*/

#include	"game.h"

int	eq_c(t_coordonnee a, t_coordonnee b)
{
  if (a.x == b.x && a.y == b.y)
    return 1;
  return 0;
}

t_coordonnee	add_x(t_coordonnee c)
{
  c.x = c.x + 1;
  return c;
}

t_coordonnee	sous_x(t_coordonnee c)
{
  c.x = c.x - 1;
  return c;
}

t_coordonnee	add_y(t_coordonnee c)
{
  c.y = c.y + 1;
  return c;
}

t_coordonnee	sous_y(t_coordonnee c)
{
  c.y = c.y - 1;
  return c;
}
