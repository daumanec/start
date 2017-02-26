#ifndef ISLAND_H
#define ISLAND_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct island {
	char *name;
	char *opens;
	char *closes;
	struct island *next;
} island;


void display(island *start);
island* create(char *name);
void release(island *start);

#endif
