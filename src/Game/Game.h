//
// Created by japanware on 1/10/2025.
//

#ifndef GAME_H
#define GAME_H

#include "raylib.h"

class Game {
private:
    // const char* m_windowTitle;

public:
    Game() = default;
    ~Game() = default;

    void update(float deltaTime);
    void render();
};



#endif //GAME_H
