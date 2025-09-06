//
// Copyright (c) 2025 KawaraGEX.
//

#include <algorithm>
#include <utility>

#include "GEX_GameObject.h"
#include "GEX_Scene.h"

using namespace GEX;

Scene::Scene(string t) : title(std::move(t)), gameObjects() {
}

void Scene::addGameObject(GameObject *obj) {
  gameObjects.push_back(obj);
}

void Scene::destroyGameObject(GameObject *obj) {
  destroyQueue.push_back(obj);
}
