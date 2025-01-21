#include <iostream>
#include <raylib.h>

int main() {
    const int screenWidth = 1080;
    const int screenHeight = 640;
    InitWindow(screenWidth, screenHeight, "Hola Raylib");

    while (not WindowShouldClose()) {
        BeginDrawing();

        DrawText("Hola Raylib 5.0!!!", 100, 250, 120, WHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}