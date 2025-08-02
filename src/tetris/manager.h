#pragma once

#include "piece.h"
#include <stdint.h>
#include <raylib.h>

typedef struct {
    Piece** Pieces;
    uint16_t count;
    uint16_t capacity;
    uint16_t windowWidth;
    uint16_t windowHeight;
} Manager;

Manager* CreateManager(uint16_t width, uint16_t height);

void RunGame(Manager* manager);
