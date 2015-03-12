/*
** user.h for  in /home/eax/cq/bla/backdoor
** 
** Made by eax
** Login   <soules_k@epitech.net>
** 
** Started on  Wed Mar 11 23:24:21 2015 eax
** Last update Wed Mar 11 23:24:42 2015 eax
*/


#ifndef USER_H_
#define USER_H_

#include <auth.h>

int	user_add(user_t **users, char *name, char *password, int *groups, int lvl);

#endif
