//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef KAWARAGEX_RESOURCEMANAGER_H
#define KAWARAGEX_RESOURCEMANAGER_H
#include <unordered_map>

#include "../GEX_Object.h"

using std::unordered_map;

namespace GEX {
  class ResourceManager {
  public:
    void addResource();

    void removeResource();

  private:
    unordered_map<int, Object> resources;
  };
}

#endif //KAWARAGEX_RESOURCEMANAGER_H
