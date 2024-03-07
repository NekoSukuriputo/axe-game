#include "raylib.h"

int main()
{
    // Window dimentions
    int width{350};
    int height{200};
    InitWindow(width, height, "Axe Game Learn C++");

    // Circle coordinate
    int circle_x{175};
    int circle_y{100};
    int circle_radius{25};


    SetTargetFPS(60);
    while (WindowShouldClose() != true)
    {
        BeginDrawing();

        ClearBackground(WHITE);
        // Game logic begins

        DrawCircle(circle_x, circle_y, circle_radius, BLUE);

        if(IsKeyDown(KEY_D) && circle_x < 350)
        {
            circle_x = circle_x + 10;
        }
        if(IsKeyDown(KEY_A) && circle_x > 0)
        {
            circle_x = circle_x - 10;
        }

        // Game login ends
        EndDrawing();
    }
}