/*
** group.c for  in /home/eax/cq/bla/backdoor
** 
** Made by eax
** Login   <soules_k@epitech.net>
** 
** Started on  Wed Mar 11 23:13:48 2015 eax
** Last update Wed Mar 11 23:26:03 2015 eax
*/

#include <stdlib.h>
#include <auth.h>

int	group_add(group_t **groups, char *name, int gid, int lvl)
{
  group_t *new;

  new = malloc(sizeof *new);
  if (!new)
    return -1;
  new->name = name;
  new->gid = gid;
  new->access_lvl = lvl;
  new->next = *groups;
  *groups = new;

  return 0;
}
