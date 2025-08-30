//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef KAWARAGEX_SCENE_H
#define KAWARAGEX_SCENE_H

#include <unordered_map>
#include <vector>

#include "GEX_Object.h"

using std::unordered_map;
using std::vector;

namespace GEX {
  class Scene {
  public:
    Scene();

    void addGameObject(const Object &obj);

    void destroyGameObject(const Object &obj);

  private:
    unordered_map<uint32_t, Object> gameObjects;
    vector<Object> destroyQueue;
  };
}

#endif //KAWARAGEX_SCENE_H
