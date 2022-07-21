#ifndef ROGUE_H
#define ROGUE_H

typedef struct
{
	int y;
	int x;
} Position;

typedef struct
{
	Position pos;
	char ch;
} Entity;

#endif
