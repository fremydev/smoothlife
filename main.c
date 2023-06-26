#include <stdio.h>
#include <raylib.h>

int main(void) {
	const int screen_width = 1600;
	const int screen_height = 900;

	InitWindow(screen_width,screen_height,"SmoothLife");  // Initialize window and OpenGL context
	SetTargetFPS(60);

	while(!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RED);
		EndDrawing();
	}

	CloseWindow();

	return 0;
}
