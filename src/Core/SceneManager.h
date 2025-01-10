//
// Created by japanware on 1/10/2025.
//

#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

#include "Scene.h"
#include <iostream>
#include <unordered_map>

class SceneManager {
private:
    std::unordered_map<std::string, std::shared_ptr<Scene>> scenes;
    std::shared_ptr<Scene> currentScene;

public:
    SceneManager() = default;
    ~SceneManager() = default;

    bool checkExistingScenes(const std::string& name) const;

    void addScene(const std::string& name, std::shared_ptr<Scene>& scene);
    void switchScene(const std::string& name);

    void update(float deltaTime);
    void render(Renderer& renderer);

    static std::unique_ptr<SceneManager>& getInstance();
};



#endif //SCENEMANAGER_H
