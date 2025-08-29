//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef KAWARAGEX_SCENE_H
#define KAWARAGEX_SCENE_H

#include <vector>

#include "GEX_Object.h"

using std::vector;

namespace GEX {
  class Scene {
  public:
    Scene();

    void addObject(const Object &obj);

  private:
    vector<Object> objects;
    vector<Object> destroyQueue;
  };
}

#endif //KAWARAGEX_SCENE_H
