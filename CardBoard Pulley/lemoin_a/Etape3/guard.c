/*
** guard.c for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape3
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Jan 20 12:16:45 2017 LE MOINE Adrien
** Last update Fri Jan 20 16:57:51 2017 LE MOINE Adrien
*/

#include	"game.h"
#include        "orientation.h"

int	alert(t_guard g, t_player p, t_room salle)
{
  int	i;

  i = 0;
  while (i < 4)
    {
      if (g.posx == p.posx && g.posy == p.posy)
	return 1;
      if (g.orientation == o_commandes[i].orientation)
	return o_commandes[i].commande(g, p, salle);
      i++;
    }
  return 0;
}

int		orient_up(t_guard g, t_player p, t_room salle)
{
  t_coordonnee	pc;
  t_coordonnee	gc;

  pc.x = p.posx;
  pc.y = p.posy;
  gc.x = g.posx;
  gc.y = g.posy - 1;
  if (salle.map[gc.y][gc.x] == 'X' || salle.map[gc.y][gc.x] == 'H' ||
      salle.map[pc.y][pc.x] == 'H')
    return 0;
  if (eq_c(gc, pc) || eq_c(sous_y(gc), pc) ||
      eq_c(sous_x(sous_y(gc)), pc) || eq_c(add_x(sous_y(gc)), pc))
    return 1;
  return 0;
}

int		orient_left(t_guard g, t_player p, t_room salle)
{
  t_coordonnee	pc;
  t_coordonnee	gc;

  pc.x = p.posx;
  pc.y = p.posy;
  gc.x = g.posx - 1;
  gc.y = g.posy;
  if (salle.map[gc.y][gc.x] == 'X' || salle.map[gc.y][gc.x] == 'H' ||
      salle.map[pc.y][pc.x] == 'H')
    return 0;
  if (eq_c(gc, pc) || eq_c(sous_x(gc), pc) ||
      eq_c(sous_y(sous_x(gc)), pc) || eq_c(add_y(sous_x(gc)), pc))
    return 1;
  return 0;
}

int		orient_down(t_guard g, t_player p, t_room salle)
{
  t_coordonnee	pc;
  t_coordonnee	gc;

  pc.x = p.posx;
  pc.y = p.posy;
  gc.x = g.posx;
  gc.y = g.posy + 1;
  if (salle.map[gc.y][gc.x] == 'X' || salle.map[gc.y][gc.x] == 'H' ||
      salle.map[pc.y][pc.x] == 'H')
    return 0;
  if (eq_c(gc, pc) || eq_c(add_y(gc), pc) ||
      eq_c(sous_x(add_y(gc)), pc) || eq_c(add_x(add_y(gc)), pc))
    return 1;
  return 0;
}

int		orient_right(t_guard g, t_player p, t_room salle)
{
  t_coordonnee	pc;
  t_coordonnee	gc;

  pc.x = p.posx;
  pc.y = p.posy;
  gc.x = g.posx + 1;
  gc.y = g.posy;
  if (salle.map[gc.y][gc.x] == 'X' || salle.map[gc.y][gc.x] == 'H' ||
      salle.map[pc.y][pc.x] == 'H')
    return 0;
  if (eq_c(gc, pc) || eq_c(add_x(gc), pc) ||
      eq_c(sous_y(add_x(gc)), pc) || eq_c(add_y(add_x(gc)), pc))
    return 1;
  return 0;
}
