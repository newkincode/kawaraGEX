//
// Copyright (c) 2025 KawaraGEX.
//

#include "Internal/GEX_ResourceManager.h"

using namespace GEX;

void ResourceManager::addResource(const Object &obj) {
  resources[obj.getEntityId()] = obj;
}

void ResourceManager::removeResource(const Object &obj) {
  removeResource(obj.getEntityId());
}

void ResourceManager::removeResource(const Id &id) {
  resources.erase(id);
}
