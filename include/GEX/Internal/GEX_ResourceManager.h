//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef GEX_RESOURCEMANAGER_H
#define GEX_RESOURCEMANAGER_H
#include <unordered_map>

#include "GEX_Object.h"

using std::unordered_map;

namespace GEX {
  class ResourceManager {
  public:
    void addResource(const Object &obj);

    void removeResource(const Id &id);

    void removeResource(const Object &obj);

  private:
    unordered_map<Id, Object> resources;
  };
}

#endif //GEX_RESOURCEMANAGER_H
