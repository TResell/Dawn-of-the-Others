#ifndef PLAYER_H
#define PLAYER_H

Entity* createPlayer(Position start_pos);
void handleInput(int input);

extern Entity* player;

#endif