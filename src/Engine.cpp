//
// Created by japanware on 1/10/2025.
//

#include "Engine.h"

void Engine::init() {
    InitWindow(1080, 720, "test");
    SetTargetFPS(60);
}

void Engine::cleanup() {
    CloseWindow();
}

void Engine::run() {
    init();

    while (WindowShouldClose() == false) {
        deltaTime = GetFrameTime();
        game.update(deltaTime);

        BeginDrawing();
        ClearBackground(BLACK);

        game.render();

        EndDrawing();
    }

    cleanup();
}
