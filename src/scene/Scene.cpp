//
// Copyright (c) 2025 KawaraGEX.
//

#include <algorithm>

#include "GEX_Scene.h"

using namespace GEX;

Scene::Scene() = default;

void Scene::addGameObject(const Object &obj) {
  gameObjects[obj];
}

void Scene::destroyGameObject(const Object &obj) {
  destroyQueue.push_back(obj);
}
