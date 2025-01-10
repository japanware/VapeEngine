//
// Created by japanware on 1/10/2025.
//

#ifndef GAME_H
#define GAME_H

#include "raylib.h"

class Game {
private:
    const char* m_windowTitle;
    float m_deltaTime;

public:
    Game();
    ~Game() = default;

    static void update();
    static void render();
};



#endif //GAME_H
