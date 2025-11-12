#include "block.hpp"

Block::Block(uint8_t width, uint8_t height, uint8_t x, uint8_t y) {
  this->width = width;
  this->height = height;
  this->x = x;
  this->y = y;
  this->color = WHITE;
}

Block::~Block() {}

bool Block::UpdateBlock(uint8_t screenWidth, uint8_t screenHeight) {
  if (this->x < 0) {
    this->x = 0;
    return true;
  } else if (this->x + this->width > screenWidth) {
    this->x = screenWidth - this->width;
    return true;
  } else if (this->y < 0) {
    this->y = 0;
    return true;
  } else if (this->y + this->height > screenHeight) {
    this->y = screenHeight - this->height;
    return true;
  }
  return false;
}

void Block::DrawBlock() {
  DrawRectangle(this->x, this->y, this->width, this->height, this->color);
}
