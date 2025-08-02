#pragma once

#include "block.h"
#include <stdint.h>

typedef uint8_t BlockType;

typedef struct {
    Block* blocks;
    BlockType type;
    uint8_t length;
} Piece;

Piece* CreatePiece(uint8_t type);
bool DestroyPiece(Piece* piece);

bool RotatePiece(Piece* piece);
bool UpdatePiece(Piece* piece);

void DrawPiece(Piece* piece);
