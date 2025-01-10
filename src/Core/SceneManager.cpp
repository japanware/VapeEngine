//
// Created by japanware on 1/10/2025.
//

#include "SceneManager.h"

bool SceneManager::checkExistingScenes(const std::string& name) const {
    if (scenes.contains(name)) {
        return true;
    }
    return false;
}


void SceneManager::addScene(const std::string& name, std::shared_ptr<Scene>& scene) {
    if (checkExistingScenes(name)) {
        scenes[name] = scene;
    }
}

void SceneManager::switchScene(const std::string& name) {
    if (scenes.contains(name)) {
        if (currentScene) {
            currentScene->cleanupScene();
        }
        currentScene = scenes[name];
        currentScene->initScene();
    } else {

    }
}

void SceneManager::update(float deltaTime) {
    currentScene->update(deltaTime);
}

void SceneManager::render(Renderer& renderer) {
    currentScene->render(renderer);
}

std::unique_ptr<SceneManager>& SceneManager::getInstance() {
    static std::unique_ptr<SceneManager> instance = std::make_unique<SceneManager>();
    return instance;
}