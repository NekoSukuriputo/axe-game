#include "raylib.h"

int main()
{
    // Window dimentions
    int width{800};
    int height{450};
    InitWindow(width, height, "Axe Game Learn C++");

    // Circle coordinate
    int circle_x{200};
    int circle_y{200};
    int circle_radius{25};

    // axe coordinates
    int axe_x{400};
    int axe_y{0};

    int direction{10};
    
    SetTargetFPS(60);
    while (WindowShouldClose() != true)
    {
        BeginDrawing();

        ClearBackground(WHITE);
        // Game logic begins

        DrawCircle(circle_x, circle_y, circle_radius, BLUE);
        DrawRectangle(axe_x, axe_y, 50, 50, RED);

        // move the axe
        axe_y += direction;
        if(axe_y > 450 || axe_y < 0)
        {
            direction = -direction;
        }

        if (IsKeyDown(KEY_D) && circle_x < width)
        {
            circle_x += 10;
        }
        if (IsKeyDown(KEY_A) && circle_x > 0)
        {
            circle_x -= 10;
        }

        // Game login ends
        EndDrawing();
    }
}