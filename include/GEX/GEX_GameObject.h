//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef KAWARAGEX_GAMEOBJECT_H
#define KAWARAGEX_GAMEOBJECT_H
#include "GEX_Scene.h"
#include "GEX_Transform.h"

namespace GEX {
  class GameObject : public Transform {
  public:
    static void destroy();

    Scene *getScene() const;

  private:
    Scene *scene = nullptr;
  };
}

#endif //KAWARAGEX_GAMEOBJECT_H
