#pragma once

#include "raylib.h"
#include <stdint.h>

class Block {
public:
  Block(uint8_t width, uint8_t height, uint8_t x, uint8_t y);
  ~Block();
  bool UpdateBlock(uint8_t screenWidth, uint8_t screenHeight);
  void DrawBlock();

private:
  uint8_t width;
  uint8_t height;
  uint8_t x;
  uint8_t y;
  Color color;
};
