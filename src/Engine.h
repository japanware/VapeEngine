//
// Created by japanware on 1/10/2025.
//

#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include "Game/Game.h"
#include "raylib.h"


class Engine {
private:
    Game game;
    float deltaTime;

public:
    Engine() = default;
    ~Engine() = default;

    void init();
    void cleanup();
    void run();

};



#endif //ENGINE_H
