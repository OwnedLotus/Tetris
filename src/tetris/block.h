#pragma once

#include <stdint.h>
#include "raylib.h"

typedef struct {
    uint8_t width;
    uint8_t height;
    uint8_t x;
    uint8_t y;
    Color color;
} Block;

Block* CreateBlock(uint8_t width, uint8_t height, uint8_t x, uint8_t y);
Block* DestroyBlock(Block* block);

bool UpdateBlock(Block* block);
void DrawBlock(Block* block);
