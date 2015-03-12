/*
** test_group.c for  in /home/eax/cq/bla/backdoor
** 
** Made by eax
** Login   <soules_k@epitech.net>
** 
** Started on  Thu Mar 12 02:50:53 2015 eax
** Last update Thu Mar 12 03:12:44 2015 eax
*/

#include <stdlib.h>
#include <stdio.h>
#include "auth.h"
#include "group.h"
#include "user.h"
#include "test.h"

/*
** user has no group.
** It should return the access_lvl of the user (43)
*/

int	group_test1()
{
  group_t *groups = NULL;
  user_t *users = NULL;
  access_request_t req;

  group_add(&groups, "group1", 2, 42);
  user_add(&users, "user1", "pwd1", (int [5]){-1}, 43);
  req.name = "user1";
  req.password = "pwd1";

  return TEST_ASSERT(users, groups, &req, 43);
}

/*
** user is in a group with higher lvl than user.
** It should return the access_lvl of the highest group (45)
*/

int	group_test2()
{
  group_t *groups = NULL;
  user_t *users = NULL;
  access_request_t req;

  group_add(&groups, "group1", 1, 42);
  group_add(&groups, "group2", 2, 43);
  group_add(&groups, "group3", 3, 44);
  group_add(&groups, "group4", 4, 45);
  
  user_add(&users, "user1", "pwd1", (int [5]){1, 2, 3, 4, -1}, 43);
  req.name = "user1";
  req.password = "pwd1";

  return TEST_ASSERT(users, groups, &req, 45);
}


/*
** user is in a group with higher lvl than user.
** It should return the access_lvl of the highest group (45)
*/

int	group_test3()
{
  group_t *groups = NULL;
  user_t *users = NULL;
  access_request_t req;

  group_add(&groups, "group1", 1, 42);
  group_add(&groups, "group2", 2, 43);
  group_add(&groups, "group3", 3, 44);
  group_add(&groups, "group4", 4, 45);
  
  user_add(&users, "user1", "pwd1", (int [5]){1, 2, 3, 4, -1}, 43);
  req.name = "user1";
  req.password = "pwd1";

  return TEST_ASSERT(users, groups, &req, 45);
}
