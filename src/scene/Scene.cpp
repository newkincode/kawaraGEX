//
// Copyright (c) 2025 KawaraGEX.
//

#include "GEX_Scene.h"

using namespace GEX;

Scene::Scene() = default;

void Scene::addObject(const Object &obj) {
  objects.push_back(obj);
}
