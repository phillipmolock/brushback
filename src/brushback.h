#ifndef BRUSHBACK_H
#define BRUSHBACK_H
#include <time.h>
#include <limits.h>

// defines
#define MIN_GAME_ID 10000
#define MAX_GAME_ID UINT_MAX
// brushback.h
// Definitions for Brushback game

// enums
enum gameState {
    TITLE,
    MATCHUP
};

// structs
struct currentGame {
    unsigned int id;
    time_t startTime;
    enum gameState gamestate;
};
#endif // BRUSHBACK_H