#include "raylib.h"

int main()
{
    int width = 350;
    int height = 200;
    InitWindow(width, height, "Axe Game Learn C++");

    while (WindowShouldClose() != true)
    {
        BeginDrawing();

        ClearBackground(RED);

        EndDrawing();
    }
    
}