//
// Created by japanware on 1/10/2025.
//

#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <raylib.h>


class Engine {
private:

public:
    Engine();
    ~Engine();

    virtual void update();
    virtual void render();
};



#endif //ENGINE_H
