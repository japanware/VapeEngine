//
// Created by japanware on 1/10/2025.
//

#include "Engine.h"

void Engine::init() {
    InitWindow(1080, 720, m_windowTitle);
    SetTargetFPS(60);
}

void Engine::cleanup() {

}

void Engine::run() {
    std::cout << "Hello from the engine!\n";
    init();

    while (WindowShouldClose() == false) {
        Game::update();

        BeginDrawing();
        ClearBackground(BLACK);
        Game::render();
        EndDrawing();
    }
}
