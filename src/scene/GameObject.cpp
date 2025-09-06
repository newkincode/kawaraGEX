#include "GEX_GameObject.h"
#include "GEX_Scene.h"

using namespace GEX;

void GameObject::destroy() {
  scene->destroyGameObject(this);
}

vector<GameObject *> GameObject::getChildren() {
  return children;
}

Scene *GameObject::getScene() const {
  return scene;
}

bool GameObject::isActive() const {
  return active;
}

void
