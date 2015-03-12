/*
** user.c for  in /home/eax/cq/bla/backdoor/tests
** 
** Made by eax
** Login   <soules_k@epitech.net>
** 
** Started on  Wed Mar 11 23:24:25 2015 eax
** Last update Thu Mar 12 01:45:10 2015 eax
*/

#include <stdlib.h>
#include <auth.h>

int	user_add(user_t **users, char *name, char *password, int *groups, int lvl)
{
  user_t *new;

  new  = malloc(sizeof *new);
  if (!new)
    return -1;
  new->name = name;
  new->password = password;
  for (int i = 0; i < 5 ; i++)
    new->groups[i] = groups[i];
  new->access_lvl = lvl;
  new->next = *users;
  *users = new;

  return 0;
}
