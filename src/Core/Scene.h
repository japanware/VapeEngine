//
// Created by japanware on 1/10/2025.
//

#ifndef SCENE_H
#define SCENE_H

#include "Renderer.h"

class Scene {
public:
    Scene()                     = default;
    virtual ~Scene()            = default;

    // I don't fucking know what to do with these functions.
    // I could use them in the future, maybe.
    virtual void initScene() {};
    virtual void cleanupScene() {};

    virtual void update(float deltaTime)        = 0;
    virtual void render(Renderer& renderer)     = 0;

};



#endif //SCENE_H
