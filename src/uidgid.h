#ifndef UIDGID_H
#define UIDGID_H

#include <sys/types.h>

struct uidgid {
  uid_t uid;
  gid_t gid[61];
  int gids;
};

extern unsigned int uidgid_get(struct uidgid *, char *, unsigned int);

#endif
