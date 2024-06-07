#include <raylib.h>
#include <string.h>

int main(void) {
    int width = 800;
    int height = 480;
    InitWindow(width, height, "MiniMoba");

    const char* text = "Project Test";
    const int xPos = width/2 - strlen(text) * 48 / 4;

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText(text, xPos, 240, 48, RED);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
