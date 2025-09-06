//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef GEX_SCENE_H
#define GEX_SCENE_H

#include <string>
#include <unordered_map>
#include <vector>

using std::string;
using std::unordered_map;
using std::vector;

namespace GEX {
  class Scene {
    friend class GameObject;

  public:
    explicit Scene(string t);

    void addGameObject(GameObject *obj);

  private:
    string title;
    vector<GameObject *> gameObjects;
    vector<GameObject *> destroyQueue;

    void destroyGameObject(GameObject *obj);
  };
}

#endif //GEX_SCENE_H
