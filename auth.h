/*
** auth.h for  in /home/eax/cq/bla/backdoor
** 
** Made by eax
** Login   <soules_k@epitech.net>
** 
** Started on  Wed Mar 11 22:34:53 2015 eax
** Last update Wed Mar 11 23:45:55 2015 eax
*/

/*
** CQ AUTH API V1.1
*/

#ifndef AUTH_CQ_
#define AUTH_CQ_

typedef struct group {
  struct group *next;
  char *name;
  int gid;
  int access_lvl;
} group_t;

typedef struct user {
  struct user *next;
  char *name;
  char *password;
  int groups[5];
  int access_lvl;
} user_t;

typedef struct access_request {
  char *name;
  char *password;
} access_request_t;


int auth(user_t *users, group_t *groups, access_request_t *req);

#endif
