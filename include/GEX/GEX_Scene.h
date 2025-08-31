//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef GEX_SCENE_H
#define GEX_SCENE_H

#include <string>
#include <unordered_map>
#include <vector>

#include "GEX_Object.h"

using std::string;
using std::unordered_map;
using std::vector;

namespace GEX {
  class Scene {
  public:
    explicit Scene(string t);

    void addGameObject(const Object &obj);

    void destroyGameObject(Object &obj);

  private:
    string title;
    unordered_map<Id, Object &> gameObjects;
    vector<Object *> destroyQueue;
  };
}

#endif //GEX_SCENE_H
