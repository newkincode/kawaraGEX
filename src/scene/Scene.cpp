//
// Copyright (c) 2025 KawaraGEX.
//

#include <algorithm>
#include <utility>

#include "GEX_Scene.h"

using namespace GEX;

Scene::Scene(string t) : title(std::move(t)), gameObjects(), destroyQueue() {
}

void Scene::addGameObject(const Object &obj) {
  gameObjects[obj.getEntityId()] = obj;
}

void Scene::destroyGameObject(Object &obj) {
  destroyQueue.push_back(&obj);
}
