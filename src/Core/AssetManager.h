//
// Created by japanware on 1/10/2025.
//

#ifndef ASSETMANAGER_H
#define ASSETMANAGER_H

#include <memory>
#include <raylib.h>
#include <string>
#include <unordered_map>


class AssetManager {
private:
    std::unordered_map<const std::string&, Texture2D> textures;
    std::unordered_map<const std::string&, Font> fonts;
    std::unordered_map<const std::string&, Sound> sounds;

public:
    AssetManager() = default;
    ~AssetManager();

    bool checkExistingTexture(const std::string& fileName);
    void loadAssetTexture(const std::string& fileName);

    bool checkExistingFont(const std::string& fileName);
    void loadAssetFont(const std::string& fileName);

    bool checkExistingSound(const std::string& fileName);
    void loadAssetSound(const std::string& fileName);

    static std::unique_ptr<AssetManager> getInstance();

    Texture2D& getTexture(const std::string& fileName);
};



#endif //ASSETMANAGER_H
