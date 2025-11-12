#pragma once

#include "block.hpp"
#include <stdint.h>
#include <vector>

enum BlockType { I = 0, J, L, O, S, T, Z };

class Piece {
public:
  Piece(uint8_t type);
  ~Piece();
  Piece *CreatePiece(uint8_t type);
  bool DestroyPiece(Piece &piece);

  bool RotatePiece(Piece *piece);
  bool UpdatePiece(Piece *piece);

  void DrawPiece(Piece *piece);

private:
  std::vector<Block> blocks;
  BlockType type;
  uint8_t length;
};
