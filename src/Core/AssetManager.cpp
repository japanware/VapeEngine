//
// Created by japanware on 1/10/2025.
//

#include "AssetManager.h"

bool AssetManager::checkExistingTexture(const std::string& fileName) {
    if (textures.contains(fileName)) {
        std::cerr << "AssetManager"
        return true;
    }
    return false;
}
