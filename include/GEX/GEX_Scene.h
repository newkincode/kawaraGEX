//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef GEX_SCENE_H
#define GEX_SCENE_H

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

#endif //GEX_SCENE_H
