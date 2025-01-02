#include <iostream>
#include <raylib.h>
#include "raymath.h"

int main(void) {
	InitWindow(800, 400, "raylib [core] example - basic window");
	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Congrats! You created you first window!", 100, 200, 20, LIGHTGRAY);
		EndDrawing();
	}

	CloseWindow();

	return 0;
}
