//
// Created by japanware on 1/10/2025.
//

#include "SceneManager.h"

void SceneManager::addScene(const std::string& name, std::shared_ptr<Scene>& scene) {
    scenes[name] = scene;
}


std::unique_ptr<SceneManager>& SceneManager::getInstance() {
    static std::unique_ptr<SceneManager> instance = std::make_unique<SceneManager>();
    return instance;
}