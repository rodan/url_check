#ifndef __networking_h__
#define __networking_h__

#include "main.h"

struct epoll_event *events;

int network_glue(void);
void network_free(void);

#endif
