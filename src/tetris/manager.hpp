#pragma once

#include "piece.hpp"
#include <stdint.h>
#include <raylib.h>

public class Manager {

    public:
        Manager(uint16_t width, uint16_t height);
        ~Manager();

        void RunGame();

    private:
        Piece** Pieces;
        uint16_t count;
        uint16_t capacity;
        uint16_t windowWidth;
        uint16_t windowHeight;
};
