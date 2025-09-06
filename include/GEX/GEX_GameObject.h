//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef GEX_GAMEOBJECT_H
#define GEX_GAMEOBJECT_H

#include <vector>

using std::vector;

namespace GEX {
  class Scene;

  class GameObject {
  public:
    void destroy();

    vector<GameObject *> getChildren();

    [[nodiscard]] Scene *getScene() const;

    [[nodiscard]] bool isActive() const;

  private:
    Scene *scene = nullptr;

    vector<GameObject *> children;

    bool active = true;

    GameObject() = default;
  };
}

#endif //GEX_GAMEOBJECT_H
