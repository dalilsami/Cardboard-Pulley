/*
** deplacement.c for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape3
** 
** Made by LE MOINE Adrien
** Login   <lemoin_a@etna-alternance.net>
** 
** Started on  Fri Jan 20 10:02:49 2017 LE MOINE Adrien
** Last update Fri Jan 20 16:57:18 2017 LE MOINE Adrien
*/

#include	"game.h"
#include	"commande.h"

char            *readline()
{
  ssize_t       ret;
  char          *buff;
  
  if ((buff = malloc(sizeof(char) * 1024)) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 1024)) > 0)
    {
      buff[ret + 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}

int		deplacement(char input,t_player *p, t_room *salle)
{
  int	i;
  int	r;

  i = 0;
  while (i < 8)
    {
      if (commandes[i].input == input)
	{
	  r = commandes[i].commande(p, salle);
	  return r;
	}
      i++;
    }
  return 1;  
}

void		deplacement_guard(t_guard *g, t_room *salle)
{
  if (g->orientation == '<')
    {
      if (salle->map[g->posy][g->posx + 1] == 'X' || salle->map[g->posy][g->posx + 1] == 'x' \
	  || salle->map[g->posy][g->posx + 1] == 'H')
	turn_guard(g, salle);
      else
	{
	  salle->map[g->posy][g->posx] = ' '; 
	  g->posx = g->posx + 1;
	  salle->map[g->posy][g->posx] = g->orientation;
	}
    }
  else if (g->orientation == '>')
    {
      if (salle->map[g->posy][g->posx - 1] == 'X' || salle->map[g->posy][g->posx - 1] == 'x' \
	  || salle->map[g->posy][g->posx - 1] == 'H')
	turn_guard(g, salle);
      else
	{
	  salle->map[g->posy][g->posx] = ' ';
	  g->posx = g->posx - 1;
	  salle->map[g->posy][g->posx] = g->orientation;
	}
    }
  else if (g->orientation == 'v')
    {
      if (salle->map[g->posy + 1][g->posx] == 'X' || \
	  salle->map[g->posy + 1][g->posx + 1] == 'x' || salle->map[g->posy + 1][g->posx] == 'H')
	turn_guard(g, salle);
      else
	{
	  salle->map[g->posy][g->posx] = ' ';
	  g->posy = g->posy + 1;
	  salle->map[g->posy][g->posx] = g->orientation;
	}
    }
  else if (g->orientation == '^')
    {
      if (salle->map[g->posy - 1][g->posx] == 'X' || \
	  salle->map[g->posy - 1][g->posx + 1] == 'x' || salle->map[g->posy - 1][g->posx] == 'H')
	turn_guard(g, salle);
      else
	{
	  salle->map[g->posy][g->posx] = ' ';
	  g->posy = g->posy - 1;
	  salle->map[g->posy][g->posx] = g->orientation;
	}
    }
}

void	turn_guard(t_guard *g, t_room *salle)
{
  if (g->orientation == '>')
    {
      g->orientation = 'v';
      salle->map[g->posy][g->posx] = g->orientation;
    }
  else if (g->orientation == '<')
    {
      g->orientation = '^';
      salle->map[g->posy][g->posx] = g->orientation;
    }
  else if (g->orientation == 'v')
    {
      g->orientation = '<';
      salle->map[g->posy][g->posx] = g->orientation;
    }
  else if (g->orientation == '^')
    {
      g->orientation = '>';
      salle->map[g->posy][g->posx] = g->orientation;
    }
}
