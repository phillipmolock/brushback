// Includes
#include "brushback.h"
#include "raylib.h"
// Main
int main(void)
{
    // Initialize window
    const int screenWidth = 800;
    const int screenHeight = 600;
    const char windowName[] = "Brushback";
    InitWindow(screenWidth, screenHeight, windowName);
    SetRandomSeed(time(NULL));
    // Current run of game
    struct currentGame currentGame = {
        (int) GetRandomValue(MIN_GAME_ID,MAX_GAME_ID),
        time(NULL),
        TITLE
    };

    // Initialize variables
    SetTargetFPS(60);
    SetRandomSeed(time(NULL));

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
            DrawText("Brushback",screenWidth * 0.25, screenHeight * 0.10,52,BLACK);



        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------

    CloseWindow();        // Close window and OpenGL context

    return 0;
}
