//
// Created by japanware on 1/10/2025.
//

#include "Game.h"

#define EXPIRED "18+"

Game::Game() : m_windowTitle("VapeEngine 0.1a") {}

void Game::update() {
    m_deltaTime = GetFrameTime();
}

void Game::render() {
    BeginDrawing();
    ClearBackground(BLACK);

    EndDrawing();
}

void Game::run() {
    CloseWindow();
}
