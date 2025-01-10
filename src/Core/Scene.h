//
// Created by japanware on 1/10/2025.
//

#ifndef SCENE_H
#define SCENE_H



class Scene {
public:
    Scene() = default;
    virtual ~Scene() = 0;

    virtual void update() = 0;
    virtual void render() = 0;

};



#endif //SCENE_H
