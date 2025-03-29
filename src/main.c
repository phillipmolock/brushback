// Includes
#include "raylib.h"
#include "time.h"

// Main
int main(void)
{
    // Initialize window
    const int screenWidth = 800;
    const int screenHeight = 600;
    const char windowName[] = "Brushback";
    InitWindow(screenWidth, screenHeight, windowName);

    // Initialize variables
    SetTargetFPS(60);
    SetRandomSeed(time(NULL));
    bool first_draw = true;

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        Rectangle sky_rec = {0,0,(float) screenWidth, (float) 0.60 * screenHeight};
        Rectangle ground_rec = {0,0.60 * screenHeight,(float) screenWidth, (float) 0.40 * screenHeight};

        // Draw
        BeginDrawing();

            ClearBackground(BLACK);
            DrawRectangleRec(sky_rec,SKYBLUE);
            DrawRectangleRec(ground_rec,GREEN);



        EndDrawing();
        //----------------------------------------------------------------------------------
        first_draw = false;
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------

    CloseWindow();        // Close window and OpenGL context

    return 0;
}
