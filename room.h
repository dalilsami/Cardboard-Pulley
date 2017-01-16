#ifndef _ROOM_H_
#define _ROOM_H

typedef struct  s_room
{
  char          **map;
  struct room   *next;
}               t_room;

#endif
