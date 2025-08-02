#include "manager.h"
#include "piece.h"
#include <assert.h>
#include <raylib.h>
#include <stdint.h>
#include <stdlib.h>

Manager* CreateManger(uint16_t width, uint16_t height) {

    Manager* manager = malloc(sizeof(Manager));
    assert(manager != NULL);
    manager->Pieces = NULL;

    manager->windowWidth = width;
    manager->windowHeight = height;

    InitWindow(manager->windowWidth, manager->windowHeight, "Tetris");
    SetTargetFPS(60);

    manager->count = 0;
    manager->capacity = 0;

    return manager;
}

void SpawnNewPiece(Manager *manager, uint8_t seed) {
    if (manager->capacity <= 0) {
        manager->Pieces = malloc(sizeof(int));
        assert(manager->Pieces != NULL);
        manager->capacity = 1;

        manager->Pieces[manager->count] = CreatePiece(seed);
        manager->count = 1;
        return;
    }

    if (manager->capacity == manager->count) {
        manager->capacity *= 2;
        manager->Pieces = realloc(manager->Pieces, manager->capacity * sizeof(int));
        assert(manager->Pieces != NULL);
        return;
    }

    manager->Pieces[manager->count] = CreatePiece(seed);
    manager->count++;
}


void UpdateGame(Manager* manager) {
    for (uint i = 0; i < manager->count; i++) {
        UpdatePiece(manager->Pieces[i]);
    }
}

void DrawGame(Manager *manager) {
    for (uint i = 0; i < manager->capacity; i++) {
        DrawPiece(manager->Pieces[i]);
    }
}

void RunGame(Manager *manager) {
    while (!WindowShouldClose()) {
        UpdateGame(manager);
        DrawGame(manager);
    }
}
